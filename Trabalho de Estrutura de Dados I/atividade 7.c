/*
Escreve um programa onde o ponteiro pont2 realiza o apontamento para o ponteiro pont1 (pont1 realiza o apontamento para a vari�vel x).
Mostre na tela os endere�os, apontamentos e valores dos elementos.
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int x = 10;
	int *pont1 = &x;
	int **pont2 = &pont1;
	
	printf ("\n Endere�o de x: %d", &x);
	printf ("\n Valor de x: %d \n", x);
	
	printf ("\n Endere�o de pont1: %d", &pont1);
	printf ("\n Apontamento de pont1: %d", pont1);
	printf ("\n Valor de *pont1: %d \n", *pont1);
	
	printf ("\n Endere�o de pont2: %d", &pont2);
	printf ("\n Apontamento de pont2: %d", pont2);
	printf ("\n Apontamento do apontado de pont2: %d", *pont2);
	printf ("\n Valor de **pont2: %d", **pont2);
	
	getch();
	
}
