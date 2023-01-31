#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[30];
	float altura = 0.0;
	int idade = 0;
	
	printf("digite seu primeiro nome: ");
	scanf("%s", nome);
	
	printf("\n digite sua altura: ");
	scanf("%f", &altura);
	
	printf("\ndigite sua idade: ");
	scanf("%d", &idade);
	
	printf("\nNome: %s\n",nome);
	printf("Altura: %.2f\n",altura);
	printf("Idade: %d",idade);

}
