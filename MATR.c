#include <stdio.h>

int main(){
	      //L  C 
	int mat[3][3];
	  //L  C
	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	  //L  C
	mat[1][0] = 4;
	mat[1][1] =	5;
	mat[1][2] = 6;
	  //L  C
	mat[2][0] = 7;
	mat[2][1] =	8;
	mat[2][2] = 9;
	
	printf("primeira linha\n");
	printf("%d %d %d\n",mat[0][0], mat[0][1], mat[0][2]);
	
	printf("segunda linha\n");
	printf("%d %d %d\n",mat[1][0], mat[1][1], mat[1][2]);
	
	printf("terceira linha\n");
	printf("%d %d %d\n",mat[2][0], mat[2][1], mat[2][2]);
	
	//colunas
	printf("primeira coluna\n");
	printf("%d\n%d\n%d\n",mat[0][0], mat[1][0], mat[2][0]);
}
