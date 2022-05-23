/*
Crie um Tipo Abstrato de Dados (TAD) que represente os numeros pares e que contenha as seguintes funcoes:
- Criar números;
- Somar números;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "numero.h"

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	numero numero1;
	int numero_par;
	
	printf (" INFORME O NÚMERO LIMITE PARA CRIAÇÃO DE NÚMEROS PARES QUE VOCÊ DESEJA: ");
	scanf  ("%d", &numero_par);
	
	Criar (&numero1, numero_par);
	
	Somar (&numero1, numero_par);
	
	getch();
}
