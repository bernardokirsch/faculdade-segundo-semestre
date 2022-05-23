typedef struct {
	char nome[40];
	int numeroDependentes;
	float salario;
} Empregado;

void Inicializa (Empregado*, char[40], int, float);
void calculaReajuste (Empregado);
void Imprime (Empregado);
