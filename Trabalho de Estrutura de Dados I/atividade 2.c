#include <stdio.h>
#include <locale.h>
#include <malloc.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	typedef struct no {
		int conteudo;
		struct no *vizinho;
	} no;
	
	no *no1;
	no *no2;
	no *no3;
	no *no4;
	
	no1= (no *)malloc (sizeof(no));
	no2= (no *)malloc (sizeof(no));
	no3= (no *)malloc (sizeof(no));
	no4= (no *)malloc (sizeof(no));
	
	no1 -> conteudo = 2;
	no2 -> conteudo = 4;
	no3 -> conteudo = 6;
	no4 -> conteudo = 8;
	
	no1 -> vizinho = no2;
	no2 -> vizinho = no3;
	no3 -> vizinho = no4;
	no4 -> vizinho = NULL;
	
	printf (" Inicial: \n");
	
	no *auxiliar = no1;
	
	while (auxiliar != NULL) {
		printf (" -> %d", auxiliar -> conteudo);
		auxiliar = auxiliar -> vizinho;
	}
	
	no *no5;
	
	no5= (no *)malloc (sizeof(no));
	
	no5 -> conteudo = 7;
	
	no3 -> vizinho = no5;
	no5 -> vizinho = no4;
	
	printf ("\n Inserção do 7: \n");
	
	auxiliar = no1;
	
	while (auxiliar != NULL) {
		printf (" -> %d", auxiliar -> conteudo);
		auxiliar = auxiliar -> vizinho;
	}
	
	no *no6;
	
	no6= (no *)malloc (sizeof(no));
	
	no6 -> conteudo = 9;
	
	no4 -> vizinho = no6;
	no6 -> vizinho = NULL;
	
	printf ("\n Inserção do 9: \n");
	
	auxiliar = no1;
	
	while (auxiliar != NULL) {
		printf (" -> %d", auxiliar -> conteudo);
		auxiliar = auxiliar -> vizinho;
	}
	
	free (no1);
	free (no2);
	free (no3);
	free (no4);
	free (no5);
	free (no6);
	
	getch();
}
