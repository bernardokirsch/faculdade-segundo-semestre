/* 4) Escreva uma função chamada trocaElementos que troca os valores dos parâmetros recebidos. 
A função deve possuir passagem por referência (utilizando ponteiros). Estrutura da função:

void trocaElementos (float *a, float *z); */

#include <stdio.h>
#include <locale.h>

void trocaElementos (float *a, float *z) {
	float aux;
	
	aux = *a;
	*a = *z;
	*z = aux;
	
}


void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf ("\n Digite um número: ");
	scanf  ("%f", &num1);
	
	printf ("\n Digite outro número: ");
	scanf  ("%f", &num2);
	
	printf ("\n Antes da troca: %.2f - %.2f", num1, num2);
	
	trocaElementos (&num1, &num2);
	
	printf ("\n Depois da troca: %.2f - %.2f", num1, num2);
	
	getch();
}
