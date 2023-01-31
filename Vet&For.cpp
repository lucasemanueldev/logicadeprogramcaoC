#include <stdio.h>

int main(){
	int vet[4] = {6, 7, 10, 3}; //lista de inicializão
	int i; //variavel de controle
	float media = 0;
	
	for(i = 0; i <= 4; i++){
		media += vet[i];
	}
	printf("\nmedia igual %.1f",media/4);
}
