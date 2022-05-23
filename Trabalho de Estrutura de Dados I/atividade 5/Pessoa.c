#include <stdio.h>
#include <locale.h>
#include "Pessoa.h"

void Inicializa (Pessoa_IMC* pessoa, char nome1[50], float altura1, float peso1, double cpf1) {
	pessoa -> nome[50] = nome1 [50];
	pessoa -> altura = altura1;
	pessoa -> peso = peso1;
	pessoa -> cpf = cpf1;
}

void IMC (Pessoa_IMC pessoa) {
	
	pessoa.imc = pessoa.peso / (pessoa.altura * pessoa.altura);
	
	if (pessoa.imc <= 18.5) {
		printf ("\nSeu IMC é de %.2f (Você está subnutrido ou abaixo do peso)", pessoa.imc);
	}
	else if (pessoa.imc >= 18.6 && pessoa.imc <= 24.9) {
		printf ("\nSeu IMC é de %.2f (Você está no seu peso ideal)", pessoa.imc);
	}
	else if (pessoa.imc >= 25 && pessoa.imc <= 29.9) {
		printf ("\nSeu IMC é de %.2f (Você está levemente acima do peso)", pessoa.imc);
	}
	else if (pessoa.imc >= 30 && pessoa.imc <= 34.9) {
		printf ("\nSeu IMC é de %.2f (Você está no primeiro grau de obesidade)", pessoa.imc);
	}
	else if (pessoa.imc >= 35 && pessoa.imc <= 39.9) {
		printf ("\nSeu IMC é de %.2f (Você está no segundo grau de obesidade)", pessoa.imc);
	}
	else {
		printf ("\nSeu IMC é de %.2f (Você está na obesidade mórbida)", pessoa.imc);
	}		
}

void Imprime (Pessoa_IMC pessoa) {
	printf ("Nome: %s \n", pessoa.nome);
	printf ("Altura: %.2f metros \n", pessoa.altura);
	printf ("Peso: %.2f quilos \n", pessoa.peso);
	printf ("CPF: %.0lf \n", pessoa.cpf);
}
