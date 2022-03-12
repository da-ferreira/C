
#include<stdio.h>
 
 int main() {
	int numeros[5] = {1, 2, 3, 4, 5}; 
	printf("Terceira posicao no array: %d\n", numeros[2]);
	
	int tamanho_array = sizeof(numeros) / sizeof(numeros[0]);
	
	printf("Tamanho do array de numeros: %d", tamanho_array);
}
