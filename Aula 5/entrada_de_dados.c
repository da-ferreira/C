
#include<stdio.h>

int main() {
	int idade;
	float saldo;
	char continuar;
	
	float a, b, c;

	printf("Digite a sua idade: ");
	scanf("%d", &idade); // note o uso do operador &
	
	printf("Digite o saldo: ");
	scanf("%f", &saldo);
	
	printf("Informe 3 valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("Deseja continuar com a execucaoo do programa? (S/N) ");
	scanf(" %c", &continuar); // note o uso do operador & (precisa do espaço antes)
	
	printf("\nValores lidos: idade: %d, saldo: %f, continuar: %c, a: %f, b: %f, c: %f", idade, saldo, continuar, a, b, c);
	
	return 0;
}
