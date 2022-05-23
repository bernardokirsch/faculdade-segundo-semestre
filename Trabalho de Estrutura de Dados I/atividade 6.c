#include <stdio.h>
#include <locale.h>

void troca (int *i, int *j) {
	int temp; // v�ri�vel temp estava como um ponteiro, desta maneira n�o era poss�vel utiliza-l� como vari�vel auxiliar
	
	temp = *i;
	*i = *j;
	*j = temp;

}

// fun��o main usada para teste da fun��o void troca
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
