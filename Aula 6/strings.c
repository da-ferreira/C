 
 #include<stdio.h>
 #include<string.h>  // Varias funcoes para manipular Strings
 
 int main() {
 	char mensagem[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
 	printf("Variavel 'mensagem': %s\n", mensagem);
 	
  	char outra_mensagem[] = "Hello";  // O \0 é adiciona automaticamente
  	printf("Variavel 'outra_mensagem': %s\n", outra_mensagem);
  	
    printf("Tamanho em bytes de 'outra_mensagem': %ld\n", sizeof(outra_mensagem));
 	printf("Tamanho em bytes de 'mensagem': %ld\n", sizeof(mensagem));
 	
	char cidade[20];
	printf("Informe a cidade: ");
	scanf("%19[0-9a-zA-Z ]s", cidade);  // Especificando o tamanho maximo aceito pela string cidade (char). Usando expressão regular também
 	printf("Cidade digitada: %s\n", cidade);
 	
 	printf("Tamanho da string 'cidade': %d\n", strlen(cidade));
 	
 	return 0;
 }
 