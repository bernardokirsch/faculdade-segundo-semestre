#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Empregado.h"

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	Empregado funcionario1;
	char nome_funcionario[40];
	int dependentes_funcionario;
	float salario_funcionario;
	
	printf ("\n Nome do funcionário: ");
	gets  (nome_funcionario);
	
	printf ("\n Número de dependentes: ");
	scanf ("%d", &dependentes_funcionario);
	
	printf ("\n Salário: ");
	scanf ("%f", &salario_funcionario);
	
	Inicializa (&funcionario1, strcpy (funcionario1.nome, nome_funcionario), dependentes_funcionario, salario_funcionario);
	
	printf ("\n ------------------------------- \n");
	
	Imprime (funcionario1);
	
	calculaReajuste (funcionario1);
	
	getch();
}
