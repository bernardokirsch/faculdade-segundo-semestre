#include <stdio.h>
#include <locale.h>

void troca (int *i, int *j) {
	int temp; // váriável temp estava como um ponteiro, desta maneira não era possível utiliza-lá como variável auxiliar
	
	temp = *i;
	*i = *j;
	*j = temp;

}

// função main usada para teste da função void troca
void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf ("\n Informe um numero: ");
	scanf  ("%d", &num1);
	
	printf ("\n Informe outro numero: ");
	scanf  ("%d", &num2);
	
	printf ("\n Antes da troca: %d  -  %d", num1, num2);
	
	troca (&num1, &num2);
	
	printf ("\n Depois da troca: %d  -  %d", num1, num2);
	
	getch();
}
