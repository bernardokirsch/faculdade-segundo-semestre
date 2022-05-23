#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Pessoa.h"

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	Pessoa_IMC pessoa1;
	char nome_pessoa[50]; 
	char sexo_pessoa[10];
	float peso_pessoa, altura_pessoa;
	
	printf ("Informe seu nome: ");
	gets (nome_pessoa);
	
	printf ("\nInforme seu peso: ");
	scanf  ("%f", &peso_pessoa);
	
	printf ("\nInforme sua altura: ");
	scanf  ("%f", &altura_pessoa);
	
	printf ("\nInforme seu sexo: ");
	scanf  ("%s", &sexo_pessoa);
	
	printf ("\n-----------------------------------------------\n\n");
	
	Inicializa (&pessoa1, strcpy (pessoa1.nome, nome_pessoa), altura_pessoa, peso_pessoa, strcpy (pessoa1.sexo, sexo_pessoa));
	
	Imprime (pessoa1);
	
	IMC (pessoa1);
	
	getch();
	
	
}
