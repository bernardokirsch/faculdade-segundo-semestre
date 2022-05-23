#include <stdio.h>
#include <locale.h>
#include "Pessoa.h"

void Inicializa (Pessoa_IMC* pessoa, char nome1[50], float altura1, float peso1, char sexo1[10]) {
	pessoa -> nome[50] = nome1 [50];
	pessoa -> altura = altura1;
	pessoa -> peso = peso1;
	pessoa -> sexo[10] = sexo1[10];
}

void IMC (Pessoa_IMC pessoa) {
	float IMC;
	
	IMC = pessoa.peso / (pessoa.altura * pessoa.altura);
	
	if (IMC <= 18.5) {
		printf ("Seu IMC é de %.2f (Você está subnutrido ou abaixo do peso)", IMC);
	}
	else if (IMC >= 18.6 && IMC <=24.9) {
		printf ("Seu IMC é de %.2f (Você está no seu peso ideal)", IMC);
	}
	else if (IMC >= 25 && IMC <=29.9) {
		printf ("Seu IMC é de %.2f (Você está levemente acima do peso)", IMC);
	}
	else if (IMC >= 30 && IMC <=34.9) {
		printf ("Seu IMC é de %.2f (Você está no primeiro grau de obesidade)", IMC);
	}
	else if (IMC >= 35 && IMC <=39.9) {
		printf ("Seu IMC é de %.2f (Você está no segundo grau de obesidade)", IMC);
	}
	else {
		printf ("Seu IMC é de %.2f (Você está na obesidade mórbida)", IMC);
	}
}

void Imprime (Pessoa_IMC pessoa) {
	printf ("Nome: %s \n", pessoa.nome);
	printf ("Altura: %.2f metros \n", pessoa.altura);
	printf ("Peso: %.2f quilos \n", pessoa.peso);
	printf ("Sexo: %s \n", pessoa.sexo);
}
