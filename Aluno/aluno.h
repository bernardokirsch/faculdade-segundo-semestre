typedef struct {
	char nome[50];
	int aula;
	int participacao;
	float nota_final;
	float nota1;
	float nota2;
	float nota3;
} Aluno_Estrutura_Dados;

void Atribui (Aluno_Estrutura_Dados*, char[50], int, int);
void SomaNotas (Aluno_Estrutura_Dados*, float, float, float);
void Nota10 (Aluno_Estrutura_Dados);
void Imprime (Aluno_Estrutura_Dados);
