/* 5) Faça duas funções chamadas void quad(int) e void quad(int *) para elevar um número ao 
quadrado, usando passagem por valor e por referência respectivamente (utilizando ponteiros) */

#include <stdio.h>
#include <locale.h>

void quad (int x) {
	x = x * x;
	printf ("\n Valor dentro da função (por valor): %d \n", x); // somente na função o valor é alterado, somente uma cópia do valor da variável original, na main o valor original não é alterado
}

void quadp (int *x) {
	*x = *x * *x; 
	printf ("\n Valor dentro da função (por referência): %d \n", *x); // valor original da main é alterado
}

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	// por valor
	int num;
	
	printf ("\n Informe um valor para ser elevado ao quadrado: ");
	scanf ("%d", &num);
	
	quad (num);
	
	printf ("\n Valor na main: %d \n", num); // valor não altera, continua o valor original de num infomardo na main
	
	printf ("----------------------------------------------");
	
	//por referência
	
	int num1;
	
	printf ("\n Informe um valor para ser elevado ao quadrado: ");
	scanf ("%d", &num1);
	
	quadp (&num1); // utilizando o endereço apontado pelo ponteiro da função
	
	printf ("\n Valor na main: %d \n", num1); // valor da main é alterado
	
	getch();
}
