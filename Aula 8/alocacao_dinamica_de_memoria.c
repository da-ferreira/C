 
#include<stdio.h>
#include <stdlib.h>

typedef struct {
		int dia, mes, ano;
} Data;

int main() {
	Data *d;
	d = malloc(sizeof(Data));  // Alocando o necessário para caber a struct Data
	
	d->dia = 10;
	d->mes = 3;
	d->ano = 2022;
	
	printf("Valores em d: %02d/%02d/%04d\n", d->dia, d->mes, d->ano);
	
	// Limpando (liberando, desalocando) a posição de memória que eu aloquei para 'd'
	// Ela avisa para o sistema que o bloco de bytes apontado por d está disponivel para reciclagem.
	free(d);  
	
	return 0;
}
