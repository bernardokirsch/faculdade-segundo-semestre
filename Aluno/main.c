#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "aluno.h"

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	Aluno_Estrutura_Dados aluno1;
	
	Atribui (&aluno1, strcpy (aluno1.nome, "Bernardo"), 10, 9);
	
	SomaNotas (&aluno1, 9.7, 8.2, 9.5);
	
	Imprime (aluno1);
	
	Nota10 (aluno1);
	
	getch ();
}
