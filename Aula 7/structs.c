
#include <stdio.h>
#include <string.h>

struct dma {
	int dia;
	int mes;
	int ano;
	char observacao[1001];
};

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

struct Y {
	int i;
	char c;
	short s;
};

int main() {
	struct dma data;
	struct Y teste;
	
	data.dia = 18;
	data.mes = 4;
	data.ano = 1997;
	strcpy(data.observacao, "Dia chuvoso");
	printf("%02d/%02d/%04d - %s\n", data.dia, data.mes, data.ano, data.observacao);
	printf("sizeof(data): %ld\n", sizeof(data));
	
	printf("sizeof(teste): %ld\n", sizeof(teste));
	
	printf("============================\n");
	
	Data data2;
	
	data2.dia = 18;
	data2.mes = 4;
	data2.ano = 1997;
	printf("%02d/%02d/%04d\n", data2.dia, data2.mes, data2.ano);
}
