#include <stdio.h>

int main(){
	int vet[4];
	int i; //variavel de controle
	float media = 0;
	
	for(i = 1; i<= 4; i++){
		printf("\nDigite a nota %d: ",i);
		scanf("%d",&vet[i]);
	}
	
	for(i = 1; i<= 4; i++){
		printf("\nValor da nota %d: %d",i,vet[i]);
	}
	
	for(i = 0; i <= 4; i++){
		media += vet[i];
	}
	printf("\n\nmedia igual %.1f",media/4);
}
