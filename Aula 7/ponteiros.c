
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

int main() {
	int idade, *p_idade;
	Data data1, *p_data;
	float *p_valor;
	
	idade = 20;
	p_idade = &idade; // faz com que p_idade receba o endere¸co de idade
	
	data1.dia = 10;
	data1.mes = 3;
	data1.ano = 2020;
	p_data = &data1; // faz com que p_data receba o endere¸co de data
	
	p_valor = NULL;
	
	printf("O valor da variavel idade eh: %d\n", idade);
	printf("O valor apontado pelo ponteiro p_idade eh: %d\n", *p_idade);
	
	(*p_data).dia = 28;
	p_data->ano = 2017;
	
	printf("Os valores da variavel data1 sao: %02d/%02d/%04d\n", data1.dia, data1.mes, data1.ano);
	printf("Os valores apontados pelo ponteiro p_data sao: %02d/%02d/%04d\n", (*p_data).dia, (*p_data).mes, (*p_data).ano);
	printf("Outra forma de acessar os valores apontados pelo ponteiro p_data: %02d/%02d/%04d\n", p_data->dia, p_data->mes, p_data->ano);
	
	if (p_valor == NULL) {
		printf("O ponteiro p_valor eh NULL\n");
	}
	   
	return 0;
}

