/*
Crie um Tipo Abstrato de Dados (TAD) que represente os numeros pares e que contenha as seguintes funcoes:
- Criar n�meros;
- Somar n�meros;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "numero.h"

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	numero numero1;
	int numero_par;
	
	printf (" INFORME O N�MERO LIMITE PARA CRIA��O DE N�MEROS PARES QUE VOC� DESEJA: ");
	scanf  ("%d", &numero_par);
	
	Criar (&numero1, numero_par);
	
	Somar (&numero1, numero_par);
	
	getch();
}
