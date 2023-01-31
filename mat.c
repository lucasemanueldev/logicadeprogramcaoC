#include <stdio.h>

int main(){
	
	int X, Z, soma, subt, mult, divi;
	
	printf("digite um valor para X: ");
	scanf("%d", &X);
	
	printf("digite um valor para Z: ");
	scanf("%d", &Z);
	
	soma = X + Z;
	subt = X - Z;
	mult = X * Z;
	divi = X / Z;
	
	printf("\nResultado da Soma: %d", soma);
	printf("\nResultado da subtracao: %d", subt);
	printf("\nResultado da Multiplicacao: %d", mult);
	printf("\nResultado da Divisao: %d", divi);
}
