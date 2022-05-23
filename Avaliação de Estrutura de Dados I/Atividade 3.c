/* 3) Qual o valor de y no final do programa? Tente primeiro descobrir e depois, verifique no computador o resultado. A seguir, escreva 
um comentário em cada comando de atribuição, explicando o que ele faz e o valor da variável à esquerda do '=' após sua execução. */

int main() {
	int y, *p, x;
	y = 0;						// y recebe o conteúdo: 0
	p = &y;						// ponteiro p recebe o endereço de y
	x = *p;						// x recebe o valor de p (no caso 0), pois p está apontando para endereço de y e o valor que o endereço aponta é 0
	x = 4;						// x recebe o conteúdo: 4
	(*p)++;						// o valor do ponteiro p recebe +1, no caso 0 + 1, valor de *p: 1, como o *p aponta para o endereço de y, o y recebe o valor 1
	x--;						// o valor de x diminui -1, no caso 4 - 1, valor de x: 3
	(*p) += x;					// valor de *p recebe o valor de *p + valor de x, ou seja, 1 + 3, valor de *p = 4 e como o *p aponta para o endereço de y, o y recebe o valor 4
	printf ("y = %d \n", y);	// o valor de y é impresso: 4
	return(0);
}
