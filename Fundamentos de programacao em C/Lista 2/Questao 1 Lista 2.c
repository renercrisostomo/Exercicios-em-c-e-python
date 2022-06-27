/*
QUESTAO 1 LISTA 2
Utilize uma estrutura de controle em um algoritmo que imprime a tabuada de 1 a 3.
*/

#include <stdio.h>

int main(void)
{
	int i, j, x;
	for(i=1; i<=3; ++i){
		printf("TABUADA DO %d\n", i);
		for(j=0; j<=9; ++j){
			x=i*j;
			printf("%d x %d = %d\n", i, j, x);
		}
		printf("\n\n");
	}
	return 0;
}

