#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
                         //   	   1234567
	int i;              //123456789ABCDEFG 
	char palavra1[20] = {"Roque Alquimista"};
	
	i = strlen(palavra1);
	printf("\nTamanho do texto: %d\n\n",i);
	puts(palavra1);
}
