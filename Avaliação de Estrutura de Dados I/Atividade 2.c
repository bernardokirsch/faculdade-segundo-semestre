/* 2) O programa abaixo est� errado. Por qu�? Implemente o mesmo na forma correta. */

#include <stdio.h>

void main (void) {
	int x, *p; 
	x = 10;
	p = &x; 
	printf ("%d", *p);
}

/* 
O programa estava errado pois o programa estava tentando mostrar o valor de p (*p) mas para isso o ponteiro p deve apontar 
para um endere�o de mem�ria, e neste programa ele estava apontando para o conte�do de x e n�o para o endere�o, para resolver
foi s� colocar um "&" (l.9) para identificar que o ponteiro p receberia o endere�o de x e ent�o o valor de p � exibido.
*/
