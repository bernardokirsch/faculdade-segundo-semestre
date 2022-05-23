typedef struct {
	char nome[81];
	char matricula[8];
	char turma;
	float p1;
	float p2;
	float p3;
	float media;
} Aluno;

void Inicializa (Aluno*, char[81], char[8], char, float, float, float);
void Media (Aluno);
void Imprime (Aluno);

