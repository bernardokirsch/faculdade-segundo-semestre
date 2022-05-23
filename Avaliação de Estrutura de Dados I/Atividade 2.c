/* 2) O programa abaixo está errado. Por quê? Implemente o mesmo na forma correta. */

#include <stdio.h>

void main (void) {
	int x, *p; 
	x = 10;
	p = &x; 
	printf ("%d", *p);
}

/* 
O programa estava errado pois o programa estava tentando mostrar o valor de p (*p) mas para isso o ponteiro p deve apontar 
para um endereço de memória, e neste programa ele estava apontando para o conteúdo de x e não para o endereço, para resolver
foi só colocar um "&" (l.9) para identificar que o ponteiro p receberia o endereço de x e então o valor de p é exibido.
*/
