#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct estudante{
	float nota;
	int idade;
	char nome[50];
};

typedef struct estudante estudante;

int main(){
	setlocale(LC_ALL, "Portuguese");
	estudante aluno[3];
	int i;
	
	for(i = 0; i < 3; i++){
		printf("\n---Digite os dados do %dº aluno!---\n",i+1);
		printf("-----------------------------------\n");
		
		puts("Nome do Aluno: ");
		scanf("%50[^\n]s", &aluno[i].nome);
		fflush(stdin);
		puts("Idade: ");
		scanf("%d",&aluno[i].idade);
		fflush(stdin);
		puts("Nota: ");
		scanf("%f",&aluno[i].nota);
		fflush(stdin);
	}
		system("cls");
	for(i = 0; i < 3; i++){
		printf("\n---dados do %dº aluno!---\n",i+1);
		printf("--------------------------\n");
		
		printf("\nNome do Aluno: %s",aluno[i].nome);
		
		printf("\nIdade: %d",aluno[i].idade);
		
		printf("\nNota: %.1f",aluno[i].nota);
	}
	
}
