#include <stdio.h>

int main(){
	
	char str[17];
	
	printf("(GETS)Digite um texto: ");
	gets(str);
	fflush(stdin);
	
	puts("(PUTS)texto digitado:");
	puts(str);
	
	printf("\n(FGETS)Digite um texto: ");
	fgets(str, 17, stdin);
	fflush(stdin);
	
	printf("\nTexto digitado: %s",str);
	
}
