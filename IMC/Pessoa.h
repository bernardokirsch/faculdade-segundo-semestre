typedef struct {
	char nome[50];
	float altura;
	float peso;
	char cpf[11];
	float imc;
} Pessoa_IMC;

void Inicializa (Pessoa_IMC*, char[50], float, float, char[11]);
void IMC (Pessoa_IMC);
void Imprime (Pessoa_IMC);
