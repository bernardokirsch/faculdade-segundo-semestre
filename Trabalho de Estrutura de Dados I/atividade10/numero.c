#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "numero.h"

void Criar (numero* numeros1, int numero1) {
	setlocale (LC_ALL, "Portuguese");
	
	numeros1 -> numeros = numero1; 
	int i;
	
	printf ("\n ---------- NÚMEROS PARES ---------- \n\n");
	
	for (i=0; i <= numero1; i++) {
		if (i % 2 == 0) {
			printf ("%d - ", i);
		}
	}
}

void Somar (numero* numeros1, int numero1) {
	setlocale (LC_ALL, "Portuguese");
	
	numeros1 -> numeros = numero1; 
	int soma = 0;
	int i;
	
	for (i=0; i <= numero1; i++) {
		if (i % 2 == 0) {
			soma = soma + i;
		}
	}
	
	printf ("\n\n SOMA DOS NÚMEROS PARES: %d", soma);
}
