#include <stdio.h>

int main(){
	
	int valor = 20;
		
	printf("valor antes do incremento: %d",valor);
	valor++;
	printf("\nvalor depois do incremento: %d",valor);
	
	printf("\nvalor antes do decremento: %d",valor);
	valor--;
	printf("\nvalor depois do decremento: %d",valor);
	
	valor += 5;
	printf("\nvalor depois do incremento de 5 unidades: %d",valor);
	
	valor -= 3;
	printf("\nvalor depois do decremento de 3 unidades: %d",valor);
	
	valor *= 10;
	printf("\nvalor depois da multiplicacao por 10: %d",valor);
	
	valor /= 20;
	printf("\nvalor depois da divisao por 20: %d",valor);
	

}
