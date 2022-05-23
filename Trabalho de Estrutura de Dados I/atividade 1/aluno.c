#include <stdio.h>
#include <locale.h>
#include "aluno.h"

void Inicializa (Aluno* aluno, char nome1[81], char matricula1[8], char turma1, float nota1, float nota2, float nota3) {
	aluno -> nome[81] = nome1[81];
	aluno -> matricula[8] = matricula1[81];
	aluno -> turma = turma1;
	aluno -> p1 = nota1;
	aluno -> p2 = nota2;
	aluno -> p3 = nota3;
};

void Media (Aluno aluno) {
	
	aluno.media = (aluno.p1 + aluno.p2 + aluno.p3) / 3;
	
	if (aluno.media < 7) {
		printf ("M�dia: %.2f! Voc� foi reprovado.", aluno.media);
	}
	else {
		printf ("M�dia: %.2f! Voc� foi aprovado! Parab�ns!", aluno.media);
	}
	
};

void Imprime (Aluno aluno) {
	printf ("\n-------- ALUNO --------\n");
	printf ("\nNome: %s", aluno.nome);
	printf ("\nMatr�cula: %s", aluno.matricula);
	printf ("\nTurma: %s", aluno.turma);
};
