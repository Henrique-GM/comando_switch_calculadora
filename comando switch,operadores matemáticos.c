#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
	
	setlocale(LC_ALL, "portuguese") ;
	
	float Numero1, Numero2, Resposta ; 
	char Operador ;
	 
	printf ("\n ========================= ") ;
	printf ("\n + : soma ") ;
	printf ("\n - : subtra��o") ;
	printf ("\n / : divis�o") ;
	printf ("\n * : multiplica��o") ;
	printf ("\n ========================= ") ;
	
	printf ("\n") ;
	
	printf ("\n insira um n�mero: ") ;
	scanf ("%f", &Numero1) ;
	
	printf ("\n") ;
	
	printf ("\n insira um operador matem�tico: ") ;
	scanf (" %c", &Operador) ;
	
	printf("\n") ;
	
	printf ("\n insira outro n�mero: ") ;
	scanf ("%f", &Numero2) ;
	
	printf ("\n") ;
	
	printf ("\n O operador escolhido foi:%c\n ", Operador) ;
	
	printf ("\n") ;
	
	
	
	switch (Operador) {
		
		case '+' :
			Resposta = Numero1 + Numero2 ;
			
			printf ("\n A soma entre os dois n�meros � %.2f\n ", Resposta) ;
	    break;
		
			
		case '-' :
			Resposta = Numero1 - Numero2 ;
			
			printf ("A subtra��o entre os dois n�meros inceridos � %.2f\n ", Resposta) ;
		break;
		
		
		case '/' :
			
			Resposta = Numero1 / Numero2 ;
			
			printf ("A divis�o entre os dois n�meros inceridos � %.2f\n ", Resposta) ;
		break;
		
		
		case '*' :
			Resposta = Numero1 * Numero2 ;
			
			printf ("A multiplica��o entre os dois n�meros inceridos � %.2f\n ", Resposta) ;
		break;
		
		
		default :
			printf("\n Digitado incorretamente \n") ;		
	}
		
system ("pause") ;	
return 0 ;	
}
