 
#include<stdio.h>
#include<string.h>

int main() {
	char nome[] = "David Ferreira";
	char mensagem[] = "David Ferreira";
	char copia_de_nome[14];
	
 	if (strcmp(nome, mensagem) == 0) {
 	   printf("Sao iguais\n");	
	} 
	else {
		printf("Nao sao iguais\n");
	}
	
	strcpy(copia_de_nome, nome);  // Copiando uma string para outra variavel
	printf("copia_de_nome: %s\n", copia_de_nome);
	
	printf("Tamanho de nome: %d\n", strlen(nome));  // Conta do inicio da String até encontrar um \0
	printf("Tamanho de copia_de_nome: %d\n", strlen(copia_de_nome));
	
	return 0;
}
