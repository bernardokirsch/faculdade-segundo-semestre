/* 4) Verifique o programa abaixo. Encontre o seu erro e corrija-o para que escreva o n�mero 10 na tela. */

#include <stdio.h>

int main() {
	int x, *p, **q;
	p = &x;
	q = &p;
	x = 10;
	printf ("\n %d \n", **q); // troca do & por **
	return(0);
}

/* O erro estava na linha 10, no printf, para monstrar na tela, ele estava escrito com "&" que serve para mostrar o endere�o do ponteiro q, e para 
mostrar o valor do ponteiro � necess�rio utilizar no lugar do &, estes ** que identifica que o deve ser mostrado na tela � o valor que ele aponta.
*/
