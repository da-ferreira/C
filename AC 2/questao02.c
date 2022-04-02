 
int funcao(unsigned long long int a) {
	if (a < 9) {
       return 1;
    }
     
    int resultado = 0;
    
    while (a == 0) {
        resultado++;
        a = a / 10;
    return resultado;
	}	
}