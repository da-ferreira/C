 
#include<stdio.h>

int main() {
	int i = 0;
	
	while (i < 10) {
		printf("i = %d\n", i);
		i++;
	}
	
	for (int j=0; j < 10; j++) {
		printf("j = %d\n", j);
	}
	
	int k = 0;
	
	do {
		printf("k = %d\n", k);
		k++;
	} while (k < 10);
	
	return 0;
}
