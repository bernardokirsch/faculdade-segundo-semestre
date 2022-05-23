#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "aluno.h"

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	Aluno aluno1;
	char nome_aluno[81], matricula_aluno[8], turma_aluno;
	float nota1_aluno, nota2_aluno, nota3_aluno;
	
	printf ("Informe o nome do aluno: ");
	scanf  ("%s", &nome_aluno);
	
	printf ("Informe a matrícula do aluno: ");
	scanf  ("%s", &matricula_aluno);
	
	printf ("Informe a turma do aluno: ");
	scanf  ("%s", &turma_aluno);
	
	printf ("Informe a primeira nota do aluno: ");
	scanf  ("%f", &nota1_aluno);
	
	printf ("Informe a segunda nota do aluno: ");
	scanf  ("%f", &nota2_aluno);
	
	printf ("Informe a terceira nota do aluno: ");
	scanf  ("%f", &nota3_aluno);
	
	//não rodou, não está executando a função, creio que seja algum bug na leitura dos dados para os paramêtros da função
	
	Inicializa (&aluno1, strcpy (aluno1.nome, nome_aluno), strcpy (aluno1.matricula, matricula_aluno), strcpy (aluno1.turma, turma_aluno), nota1_aluno, nota2_aluno, nota3_aluno);
	
	Imprime (aluno1);
	
	Media (aluno1);
	
	getch();
	
};
