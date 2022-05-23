#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>

void main (void) {
	
	typedef struct no {
		char conteudo;
		struct no *vizinho;
	} no;
	
	no *no1;
	no *no2;
	no *no3;
	
	no1= (no *)malloc (sizeof(no));
	no2= (no *)malloc (sizeof(no));
	no3= (no *)malloc (sizeof(no));
	
	no1 -> conteudo = 'a';
	no2 -> conteudo = 'c';
	no3 -> conteudo = 'd';
	
	no1 -> vizinho = no2;
	no2 -> vizinho = no3;
	no3 -> vizinho = NULL;
	
	no *no4;  // inserção de 'b'
	
	no4= (no *)malloc (sizeof(no));
	no4 -> conteudo = 'b';
	no1 -> vizinho = no4;
	no4 -> vizinho = no2; 
	
	// apagar o código para remover 'b'
	
	no *auxiliar = no1;
	
	while (auxiliar != NULL) {
		printf ("%c \n", auxiliar -> conteudo);
		auxiliar = auxiliar -> vizinho;
	}
	
	free (no1);
	free (no2);
	free (no3);
	
	free (no4); // remover para remover 'b'
	
	getch();
}

