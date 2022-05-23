/* 5) Fa�a duas fun��es chamadas void quad(int) e void quad(int *) para elevar um n�mero ao 
quadrado, usando passagem por valor e por refer�ncia respectivamente (utilizando ponteiros) */

#include <stdio.h>
#include <locale.h>

void quad (int x) {
	x = x * x;
	printf ("\n Valor dentro da fun��o (por valor): %d \n", x); // somente na fun��o o valor � alterado, somente uma c�pia do valor da vari�vel original, na main o valor original n�o � alterado
}

void quadp (int *x) {
	*x = *x * *x; 
	printf ("\n Valor dentro da fun��o (por refer�ncia): %d \n", *x); // valor original da main � alterado
}

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	// por valor
	int num;
	
	printf ("\n Informe um valor para ser elevado ao quadrado: ");
	scanf ("%d", &num);
	
	quad (num);
	
	printf ("\n Valor na main: %d \n", num); // valor n�o altera, continua o valor original de num infomardo na main
	
	printf ("----------------------------------------------");
	
	//por refer�ncia
	
	int num1;
	
	printf ("\n Informe um valor para ser elevado ao quadrado: ");
	scanf ("%d", &num1);
	
	quadp (&num1); // utilizando o endere�o apontado pelo ponteiro da fun��o
	
	printf ("\n Valor na main: %d \n", num1); // valor da main � alterado
	
	getch();
}
