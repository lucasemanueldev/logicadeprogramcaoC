#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char STRING1[50] = {"senha123"};
	char SENHA[50];
	int x;
	
	printf("Digite um texto: ");
	gets(SENHA);
	
	x = strcmp(STRING1,SENHA);
	
	if(x == 0){
		printf("\nOs Textos São Iguais!");
	}else{
		printf("\nOs Textos São Diferentes!");
	}
}
