/*
Nome: Bernardo Gularte Kirsch
8) Observe uma estrutura de alocacao encadeada:
1,5 - 2,8 - 9,7
Implemente uma funcao para realizar a exclusao do elemento 2,8.
*/

#include <stdio.h>
#include <locale.h>
#include <malloc.h>

//cria��o da estrutura
	typedef struct no {
		float conteudo;
		struct no *vizinho;
	} no;

//cria��o da fun��o para remover um elemento
void remover (no *auxiliar, float elemento) {
	
	no *anterior = NULL;
	
	while (auxiliar != NULL && auxiliar -> conteudo != elemento) {
		anterior = auxiliar;
		auxiliar = auxiliar -> vizinho;
	}
	
	if (auxiliar != NULL) {
		anterior -> vizinho = auxiliar -> vizinho;
		free (auxiliar);
	}
}

//fun��o principal
void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o dos n�s
	no *no1;
	no *no2;
	no *no3;
	
	//aloca��o de mem�ria para os n�s
	no1= (no *)malloc (sizeof(no));
	no2= (no *)malloc (sizeof(no));
	no3= (no *)malloc (sizeof(no));
	
	//inser��o de conte�do para os n�s
	no1 -> conteudo = 1.5;
	no2 -> conteudo = 2.8;
	no3 -> conteudo = 9.7;
	
	//encadeamento dos n�s
	no1 -> vizinho = no2;
	no2 -> vizinho = no3;
	no3 -> vizinho = NULL;
	
	printf ("\n Antes da remo��o do elemento 2.8 \n");
	
	//para mostrar os elementos, sem perder o primeiro elemento
	no *auxiliar = no1;
	
	//para percorrer e imprimir os elementos
	while (auxiliar != NULL) {
		printf (" -> %.1f", auxiliar -> conteudo);
		auxiliar = auxiliar -> vizinho;
	}
	
	printf ("\n Depois da remo��o do elemento 2.8 \n");
	
	//para percorrer e imprimir os elementos
	auxiliar = no1;
	
	//chamando a fun��o de remo��o
	remover (auxiliar, 2.8); 
	
	//para percorrer e imprimir os elementos
	while (auxiliar != NULL) {
		printf (" -> %.1f", auxiliar -> conteudo);
		auxiliar = auxiliar -> vizinho;
	}
	
	//para desalocar os n�s da mem�ria
	free (no1);
	free (no2);
	free (no3);
	
	getch();
}

