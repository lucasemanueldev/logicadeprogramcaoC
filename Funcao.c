#include <stdio.h>

int MenorNum(int num1, int num2){
	if(num1 < num2)
		return num1;
	else
		return num2;
}

int main(){
	int x, y, m;
	
	printf("Digite um Numero: ");
	scanf("%d", &x);
	
	printf("\nDigite um Numero: ");
	scanf("%d", &y);
	
	m = MenorNum(x,y);
	
	printf("\nMenor Numero: %d", m);
}
