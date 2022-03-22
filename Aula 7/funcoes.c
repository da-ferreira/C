 
 #include<stdio.h>
 
 double soma_2_numeros(int a, int b);  // Assinatura da função
 
  /* 
  O programa principal deve ser a última função. A implementação da função deve estar antes de chamar ela. 
  A NAO SER que tenha a assinatura da funcao acima. Dessa forma o interpretador consegue trabalhar.
  */
 int main() {
 	printf("Resultado: %lf\n", soma_2_numeros(10, 20));
 	return 0;
 }
 
 double soma_2_numeros(int a, int b) {
 	double c = a + b;  // Variavel local
 	return c;
 }
 