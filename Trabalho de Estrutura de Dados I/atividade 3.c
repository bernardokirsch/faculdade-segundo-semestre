/* 3) Assumindo que o endereço da variável x foi atribuído a um ponteiro px, escreva uma expressão que não usa x e divida x por 10. 
O resultado da expressão deve ser mostrado se for maior do que 10, caso contrário mostrar a mensagem de “Não disponível”. */

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
		printf ("\n O resultado é: %d", px);
	}
	else {
		printf ("\n Não disponível");
	}
	
	getch();
}
