/* 3) Assumindo que o endere�o da vari�vel x foi atribu�do a um ponteiro px, escreva uma express�o que n�o usa x e divida x por 10. 
O resultado da express�o deve ser mostrado se for maior do que 10, caso contr�rio mostrar a mensagem de �N�o dispon�vel�. */

#include <stdio.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int x, *px;
	
	printf (" Informe um valor para x: ");
	scanf  ("%d", &x);
	
	px = &x;
	
	px = *px / 10;
	
	if (px > 10) {
		printf ("\n O resultado �: %d", px);
	}
	else {
		printf ("\n N�o dispon�vel");
	}
	
	getch();
}
