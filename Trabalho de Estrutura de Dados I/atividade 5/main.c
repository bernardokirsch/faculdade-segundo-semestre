#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Pessoa.h"

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	Pessoa_IMC pessoa1;
	char nome_pessoa[50]; 
	double cpf_pessoa;
	float peso_pessoa, altura_pessoa;
	double cpf_pesquisa_pessoa;
		
	printf ("\nInforme seu nome: ");
	scanf  ("%s", &nome_pessoa);
	
	printf ("\nInforme seu peso: ");
	scanf  ("%f", &peso_pessoa);
	
	printf ("\nInforme sua altura: ");
	scanf  ("%f", &altura_pessoa);
	
	printf ("\nInforme seu CPF: ");
	scanf  ("%lf", &cpf_pessoa);
	
	printf ("\n-----------------------------------------------\n\n");
	
	Inicializa (&pessoa1, strcpy (pessoa1.nome, nome_pessoa), altura_pessoa, peso_pessoa, cpf_pessoa);
	
	Imprime (pessoa1);
	
	printf ("\nPesquisa de pessoa por CPF, caso esteja no sistema seu IMC será exibido \n");
	printf ("Informe o CPF para pesquisa: ");
	scanf  ("%lf", &cpf_pesquisa_pessoa);
	
	//Alterei o CPF para double para poder realizar o teste, havia utilizado char para o CPF, mas não estava conseguindo testar para realizar a pesquisa
	
	if (cpf_pesquisa_pessoa == pessoa1.cpf) {
		IMC (pessoa1);
	}
	else {
		printf ("\nErro, o CPF correspondente não consta no sistema.");
	}
	
	getch();
	
}
