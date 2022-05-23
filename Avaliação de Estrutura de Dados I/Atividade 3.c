/* 3) Qual o valor de y no final do programa? Tente primeiro descobrir e depois, verifique no computador o resultado. A seguir, escreva 
um coment�rio em cada comando de atribui��o, explicando o que ele faz e o valor da vari�vel � esquerda do '=' ap�s sua execu��o. */

int main() {
	int y, *p, x;
	y = 0;						// y recebe o conte�do: 0
	p = &y;						// ponteiro p recebe o endere�o de y
	x = *p;						// x recebe o valor de p (no caso 0), pois p est� apontando para endere�o de y e o valor que o endere�o aponta � 0
	x = 4;						// x recebe o conte�do: 4
	(*p)++;						// o valor do ponteiro p recebe +1, no caso 0 + 1, valor de *p: 1, como o *p aponta para o endere�o de y, o y recebe o valor 1
	x--;						// o valor de x diminui -1, no caso 4 - 1, valor de x: 3
	(*p) += x;					// valor de *p recebe o valor de *p + valor de x, ou seja, 1 + 3, valor de *p = 4 e como o *p aponta para o endere�o de y, o y recebe o valor 4
	printf ("y = %d \n", y);	// o valor de y � impresso: 4
	return(0);
}
