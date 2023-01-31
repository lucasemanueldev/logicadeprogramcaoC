#include <stdio.h>
#include <stdlib.h>

struct aluno{
	char PrimeiroNome[10];
	int idade;
	float nota;
};
typedef struct aluno aluno;

int main(){
	aluno A1;
	
	printf("Digite o nome do aluno: ");
	scanf("%s", A1.PrimeiroNome);
	
	printf("\nDigite a Idade do aluno: ");
	scanf("%d",&A1.idade);
	
	printf("\nDigite a nota do aluno: ");
	scanf("%f",&A1.nota);
	
	printf("\nAluno: %s",A1.PrimeiroNome);
	printf("\nIdade: %d",A1.idade);
	printf("\nNota: %.1f",A1.nota);
	
}
