#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	struct listadupla {
		struct listadupla *antes;
		int dado;
		struct listadupla *proximo;
	};
	
	struct listadupla *inicial = NULL, *novo = NULL, *aux = NULL, *anterior = NULL, *pos = NULL;
	int opcao = 0, achou = 0, dadodigitado;
	
	while (opcao != 5) {
		system ("cls");
		printf ("\n ---> Opções <--- \n");
		printf ("\n 1 - Inserir elemento \n");
		printf ("\n 2 - Listar elementos \n");
		printf ("\n 3 - Localizar elemento \n");
		printf ("\n 4 - Remover elemento \n");
		printf ("\n 5 - Sair \n");
		printf ("\n Digite sua opção: ");
		scanf  ("%d", &opcao);
		fflush (stdin); // limpar o buffer
		system ("cls"); // limpar a tela
	
		if (opcao == 1) {
			printf (" \n Informe um valor para ser inserido: ");
			scanf  ("%d", &dadodigitado);
			fflush(stdin);
			if (inicial == NULL) {
				inicial = (struct listadupla*) malloc(sizeof(struct listadupla));
				inicial -> antes = NULL;
				inicial -> dado = dadodigitado;
				inicial -> proximo = NULL;
				printf ("\n Inserido elemento na lista vazia. \n");
				getch();
			}			
			else if (inicial -> dado >= dadodigitado) {
				aux = (struct listadupla*) malloc(sizeof(struct listadupla));
				aux -> antes = NULL;
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
					novo = (struct listadupla*) malloc(sizeof(struct listadupla));
					novo -> antes = anterior;
					novo -> dado = dadodigitado;
					novo -> proximo = aux;
					anterior -> proximo = novo;
					printf ("\n Meio da lista. \n");
					getch();
				}
				
				else {
					novo = (struct listadupla*) malloc(sizeof(struct listadupla));
					novo -> antes = aux;
					novo -> dado = dadodigitado;
					novo -> proximo = NULL;
					aux -> proximo = novo;
					printf ("\n Fim da lista. \n");
					getch();
				} 
			}
		} // fim do if == 1
		
		if (opcao == 2) {
			if (inicial == NULL) {
				printf ("\n Lista vazia \n");
				getch();
			}
			else {
				aux = inicial;
				printf ("\n Lista ordenada: \n\n");
				while (aux != NULL) {
					printf (" Endereço: %u - Antes: %u | Dado: %d | Próximo: %u \n", aux, aux -> antes, aux -> dado, aux -> proximo);
					aux = aux -> proximo;
				}
				getch();
			}
		} // fim do if == 2
		
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
		} // fim do if == 3
		
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
					aux -> proximo -> antes = NULL;
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
		} // fim do if == 4
		
	} // fim do while inicial
	
	printf ("\n Até logo! \n");
	
	getch();
}
