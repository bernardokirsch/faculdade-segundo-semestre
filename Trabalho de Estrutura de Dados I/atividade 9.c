/*
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas os ponteiros B, C e D. 
O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quadruplo. Considere a declaração:
int A, *B, **C, ***D;
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	int A;
	int *B;
	int **C;
	int ***D;
	
	printf ("\n Informe um valor para A: ");
	scanf  ("%d", &A);
	
	B = A * 2;
	C = A * 3;
	D = A * 4;
	
	printf (" A = %d \n", A);
	printf (" B = %d \n", B);
	printf (" C = %d \n", C);
	printf (" D = %d \n", D);
	
	getch();
}
