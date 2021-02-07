#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
	
	setlocale(LC_ALL, "portuguese") ;
	
	float Numero1, Numero2, Resposta ; 
	char Operador ;
	 
	printf ("\n ========================= ") ;
	printf ("\n + : soma ") ;
	printf ("\n - : subtração") ;
	printf ("\n / : divisão") ;
	printf ("\n * : multiplicação") ;
	printf ("\n ========================= ") ;
	
	printf ("\n") ;
	
	printf ("\n insira um número: ") ;
	scanf ("%f", &Numero1) ;
	
	printf ("\n") ;
	
	printf ("\n insira um operador matemático: ") ;
	scanf (" %c", &Operador) ;
	
	printf("\n") ;
	
	printf ("\n insira outro número: ") ;
	scanf ("%f", &Numero2) ;
	
	printf ("\n") ;
	
	printf ("\n O operador escolhido foi:%c\n ", Operador) ;
	
	printf ("\n") ;
	
	
	
	switch (Operador) {
		
		case '+' :
			Resposta = Numero1 + Numero2 ;
			
			printf ("\n A soma entre os dois números é %.2f\n ", Resposta) ;
	    break;
		
			
		case '-' :
			Resposta = Numero1 - Numero2 ;
			
			printf ("A subtração entre os dois números inceridos é %.2f\n ", Resposta) ;
		break;
		
		
		case '/' :
			
			Resposta = Numero1 / Numero2 ;
			
			printf ("A divisão entre os dois números inceridos é %.2f\n ", Resposta) ;
		break;
		
		
		case '*' :
			Resposta = Numero1 * Numero2 ;
			
			printf ("A multiplicação entre os dois números inceridos é %.2f\n ", Resposta) ;
		break;
		
		
		default :
			printf("\n Digitado incorretamente \n") ;		
	}
		
system ("pause") ;	
return 0 ;	
}
