#include <stdio.h>

int main(){
	
	char str[16];
	
	printf("Digite um texto: ");
	scanf("%s",str); //scanf normal
	fflush(stdin);
	
	printf("\nTexto digitado: %s\n",str);
	
	printf("\nDigite um texto: ");
	scanf("%15[^\n]s",str); //scanf aprimorado
	fflush(stdin);
	
	printf("\nTexto digitado: %s",str);

	
}
