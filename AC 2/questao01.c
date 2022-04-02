
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int matricula;
	char nome [81];
	char data_nasc[11];
	float media;
} Aluno;

void le_dados_aluno(Aluno *a) {
	printf("Matricula: ");
	scanf("%d", &(a->matricula));  // __I__  Passando a posição de memória de matricula (int)
	printf("Nome: ");            
	scanf(" %80[^\n]s", a->nome);  // __II__ A varaiável do array de char já guarda a 1º posição de memória
	printf("Data de nascimento (dd/mm/yyyy): ");
	scanf("%10s", (*a).data_nasc);  //  __III__
	printf("Media: ");
	scanf("%f", &(*a).media);  // __IV__
}

int main(){
	Aluno alu1;
	le_dados_aluno(&alu1);  //  __V__
	printf("=================\n");
	printf("Dados do aluno lido: \n");
	printf(" Matricula: %d\n", alu1.matricula);
	printf(" Nome: %s\n", alu1.nome);
	printf(" Data: %s\n", alu1.data_nasc);
	printf(" Media: %5.2f\n", alu1.media);
	                 
	return 0;
}