#include <stdio.h>
#include <locale.h>
#include "aluno.h"

void Atribui (Aluno_Estrutura_Dados* alunop, char pnome[50], int naula, int participacoes) {
	alunop -> nome[50] = pnome[50];
	alunop -> aula = naula;
	alunop -> participacao = participacoes;
}

void SomaNotas (Aluno_Estrutura_Dados* alunop, float nota_1, float nota_2, float nota_3) {
	alunop -> nota1 = nota_1;
	alunop -> nota2 = nota_2;
	alunop -> nota3 = nota_3;
	alunop -> nota_final = (nota_1 + nota_2 + nota_3) / 3;
}
	
void Nota10 (Aluno_Estrutura_Dados aluno) {
	float porc;
	porc = ((aluno.participacao * 100) / aluno.aula);
	
	if (aluno.nota_final >= 9 && porc >= 80) {
		printf ("Este é um aluno nota 10! \n");
	}
}

void Imprime (Aluno_Estrutura_Dados aluno) {
	printf ("Nome: %s \n", aluno.nome);
	printf ("Notas: %.2f \n", aluno.nota_final);
	printf ("Aulas: %d \n", aluno.aula);
	printf ("Aulas participadas: %d \n", aluno.participacao);
}
