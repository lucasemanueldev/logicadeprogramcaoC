#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char palavra1[20] = {"Olá Usuário!"} ; //origem
	char palavra2[20]; //destino
	
	printf("Antes de usar STRCPY:\n");
	puts(palavra1);
	puts(palavra2);
	
	strcpy(palavra2,palavra1);
	
	printf("\nDepois de usar STRCPY:\n");
	puts(palavra1);
	puts(palavra2);
}
