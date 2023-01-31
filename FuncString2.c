#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char palavra1[20] = {"Roque"};
	char palavra2[20] = {" Alquimista"};
	
	printf("Antes de usar STRCAT:\n");
	printf("String1 %s\n", palavra1);
	printf("String2 %s\n", palavra2);
	
	strcat(palavra1,palavra2);
		
	printf("\nDepois de usar STRCAT:\n");
	puts(palavra1);
}
