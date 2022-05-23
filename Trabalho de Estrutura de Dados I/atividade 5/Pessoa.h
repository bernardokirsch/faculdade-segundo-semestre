typedef struct {
	char nome[50];
	float altura;
	float peso;
	double cpf;
	float imc;
} Pessoa_IMC;

void Inicializa (Pessoa_IMC*, char[50], float, float, double);
void IMC (Pessoa_IMC);
void Imprime (Pessoa_IMC);
