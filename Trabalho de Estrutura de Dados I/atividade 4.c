/* 4) Escreva uma fun��o chamada trocaElementos que troca os valores dos par�metros recebidos. 
A fun��o deve possuir passagem por refer�ncia (utilizando ponteiros). Estrutura da fun��o:

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
	
	printf ("\n Digite um n�mero: ");
	scanf  ("%f", &num1);
	
	printf ("\n Digite outro n�mero: ");
	scanf  ("%f", &num2);
	
	printf ("\n Antes da troca: %.2f - %.2f", num1, num2);
	
	trocaElementos (&num1, &num2);
	
	printf ("\n Depois da troca: %.2f - %.2f", num1, num2);
	
	getch();
}
