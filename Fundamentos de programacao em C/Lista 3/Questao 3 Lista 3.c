/*
QUESTAO 3 LISTA 3
A série fibonacci é formada pele seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 13, 21, 34, 55...etc.
Escreva um algoritmo que gere a serie fibonacci até o 12o termo;
*/

#include <stdio.h>

int main(void)
{
	int atual=1, proximo, i;
	
	printf("1, 1");
	int anterior=atual;
	for(i=2; i<12; ++i){
		proximo=atual+anterior;
		anterior=atual;
		atual=proximo;
		printf(", %d", proximo);
	}
	printf("\n\n12o TERMO = %d", atual);
    return 0;
}


