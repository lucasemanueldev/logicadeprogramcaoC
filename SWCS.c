#include <stdio.h>

int main(){
	
	int VAR = 0;
	
	printf("digite um numero de 1 a 12: ");
	scanf("%d",&VAR);
	
	switch(VAR){
		case 1:
			printf("Janeiro");
			break;
		case 2:
			
			printf("Fevereiro");
			break;
		case 3:
			printf("Marco");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("JUlho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembo");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
			break;
	}
	
}
