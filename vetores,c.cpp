#include <stdio.h>

int main(){
	
	int vet[4];
	float media;
	vet[0] = 6;  //nota1
	vet[1] = 7;  //nota2
	vet[2] = 10; //nota3
	vet[3] = 3;  //nota4
	
	media = vet[0] + vet[1] + vet[2] + vet[3];
	
	media = media/4;
	
	printf("\nmedia igual %.1f",media);
	
}
