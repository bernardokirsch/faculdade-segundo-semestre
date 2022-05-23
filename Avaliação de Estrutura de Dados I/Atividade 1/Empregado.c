#include <stdio.h>
#include <locale.h>
#include "Empregado.h"

void Inicializa (Empregado* funcionario, char nome1[40], int dependentes, float salario1) {
	funcionario -> nome[40] = nome1[40];
	funcionario -> numeroDependentes = dependentes;
	funcionario -> salario = salario1;
}

void calculaReajuste (Empregado funcionario) {
	setlocale (LC_ALL, "Portuguese");
	
	if (funcionario.numeroDependentes > 0) {
		funcionario.salario = (funcionario.salario * 1.2);
		printf ("\n O novo salário foi reajustado em 20%% e é de: %2.f reais", funcionario.salario);
	}
	else if (funcionario.numeroDependentes == 0) {
		funcionario.salario = (funcionario.salario * 1.05);
		printf ("\n O novo salário foi reajustado em 5%% e é de: %2.f reais", funcionario.salario);
	}
	else {
		printf ("\n Impossível ter menos que 0 dependentes \n");
	}
}

void Imprime (Empregado funcionario) {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("\n Nome: %s \n", funcionario.nome);
	printf ("\n Dependentes: %d dependente(s) \n", funcionario.numeroDependentes);
}
