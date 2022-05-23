//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>

// Alunos: Bernardo Gularte Kirsch, Matheus Magalhões Lisboa e Rafael Oliveira Brizola

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	// estrutura do nó
	typedef struct nodo {
		int dado;
		struct nodo *proximo;
	} nodo;
	
	// declaração e inicialização dos ponteiros e váriaveis
	nodo *inicial = NULL, *novo = NULL, *aux = NULL, *anterior = NULL, *pos = NULL;
	int opcao = 0, achou = 0, dadodigitado;
	
	while (opcao != 6) {
		system ("cls"); // limpar a tela
		printf ("\n ---> Opções <--- \n");
		printf ("\n 1 - Inserir elemento \n");
		printf ("\n 2 - Listar elementos \n");
		printf ("\n 3 - Localizar elemento \n");
		printf ("\n 4 - Remover elemento \n");
		printf ("\n 5 - Destruir lista \n");
		printf ("\n 6 - Sair \n");
		printf ("\n Digite sua opção: ");
		scanf  ("%d", &opcao);
		fflush (stdin); // limpar o buffer
		system ("cls"); // limpar a tela
		
		// inserção de elementos na lista
		if (opcao == 1) {
			printf (" \n Informe um valor para ser inserido: ");
			scanf  ("%d", &dadodigitado);
			fflush(stdin); // limpa o buffer
			if (inicial == NULL) {
				inicial = (struct nodo*) malloc(sizeof(struct nodo)); // alocar memória
				inicial -> dado = dadodigitado;
				inicial -> proximo = NULL;
				printf ("\n Inserido elemento na lista vazia. \n");
				getch();
			}			
			else if (inicial -> dado >= dadodigitado) {
				aux = (struct nodo*) malloc(sizeof(struct nodo)); // alocar memória
				aux -> dado = dadodigitado;
				aux -> proximo = inicial;
				inicial = aux;
				printf ("\n Primeira posição. \n");
				getch();
			}
			else {
				aux = inicial;
				anterior = inicial;
				
				while ((aux -> dado <= dadodigitado) && (aux -> proximo != NULL)) {
					anterior = aux;
					aux = aux -> proximo;
				}
				
				if ((aux -> proximo != NULL) && (aux -> dado > dadodigitado)) {
					novo = (struct nodo*) malloc(sizeof(struct nodo));
					novo -> dado = dadodigitado;
					novo -> proximo = aux;
					anterior -> proximo = novo;
					printf ("\n Meio da lista. \n");
					getch();
				}
				
				else if (aux -> dado > dadodigitado) {
					novo = (struct nodo*) malloc(sizeof(struct nodo));
					novo -> dado = dadodigitado;
					novo -> proximo = aux;
					anterior -> proximo = novo;
					printf ("\n Meio da lista (penúltima posição). \n");
					getch();
				}
				
				else {
					novo = (struct nodo*) malloc(sizeof(struct nodo));
					novo -> dado = dadodigitado;
					novo -> proximo = NULL;
					aux -> proximo = novo;
					printf ("\n Fim da lista. \n");
					getch();
				} 
			}
		} // fim da opcao == 1
		
		// mostra os elementos da lista de forma ordenada
		if (opcao == 2) {
			if (inicial == NULL) {
				printf ("\n Lista vazia \n");
				getch();
			}
			else {
				aux = inicial;
				printf ("\n Lista ordenada: ");
				while (aux != NULL) {
					printf ("%d  ", aux -> dado);
					aux = aux -> proximo;
				}
				getch();
			}
		} // fim da opcao == 2
		
		// localizar elemento na lista
		if (opcao == 3) {
			if (inicial == NULL) {
				printf ("\n Lista vazia \n");
				getch();
			}
			else {
				aux = inicial;
				printf ("\n Informe o valor a ser localizado: ");
				scanf  ("%d", &dadodigitado);
				
				while ((aux != NULL) && (achou == 0)) {
					if (aux -> dado == dadodigitado) {
						achou = 1;
						pos = aux;
					}
					else {
						aux = aux -> proximo;
					}
				}
				if (achou == 1) {
					printf ("\n Localizado o valor %d, no endereço %u. \n", pos -> dado, pos);
					getch();
				}
				else {
					printf ("\n Valor não localizado. \n");
					getch();
				}	
			}
		} // fim da opcao == 3
		
		// remover elemento da lista
		if (opcao == 4) {
			if (inicial == NULL) {
				printf ("\n Lista vazia \n");
				getch();
			}
			else {
				aux = inicial;
				printf ("\n Informe o valor a ser removido: ");
				scanf  ("%d", &dadodigitado);
				
				if ((aux -> proximo == NULL) && (aux -> dado == dadodigitado)) {
					inicial = NULL;
					free(aux);
					printf ("\n Elemento removido (único elemento da lista), a lista está vazia. \n");
					getch();
				}
				else if (aux -> dado == dadodigitado) {
					inicial = aux -> proximo;
					free(aux);
					printf ("\n Elemento removido (no início da lista/primeiro). \n");
					getch();
				}
				while ((aux -> dado != dadodigitado) && (aux -> proximo != NULL)) {
					anterior = aux;
					aux = aux -> proximo;
					if ((aux -> proximo != NULL) && (aux -> dado == dadodigitado)) {
						anterior -> proximo = aux -> proximo;
						free(aux);
						printf ("\n Elemento removido (no meio da lista). \n");
						getch();
					}
					else if (aux -> dado == dadodigitado) {
						anterior -> proximo = NULL;
						free(aux);
						printf ("\n Elemento removido (no fim da lista). \n");
						getch();
					}
				}
			}
		} // fim da opcao == 4
		
		// apaga todos os elementos da lista
		if (opcao == 5) {
			if (inicial == NULL) {
				printf ("\n Lista vazia. \n");
				getch();
			}
			else {
				aux = inicial;
				while (aux != NULL) {
					pos = aux -> proximo;
					free(aux); // desalocar memória
					aux = pos;
				}
				inicial = NULL;
				printf ("\n Lista destruída. \n");
				getch();
			}
		} // fim da opcao == 5
	
	} // fim do while inicial
	
	printf ("\n Até logo! \n");
	
	getch();
}
