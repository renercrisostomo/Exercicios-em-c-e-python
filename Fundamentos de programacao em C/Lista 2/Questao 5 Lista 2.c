/*
QUESTAO 5 LISTA 2
Escrever um algoritmo para ler dois valores numéricos e apresentar a diferença do maior pelo menor.
*/

#include <stdio.h>

int main(void)
{
	int i, j, diferenca=0;
	printf("Numero 1 = ");
	scanf("%d",&i);
	printf("Numero 2 = ");
	scanf("%d",&j);
	if(i>j){
		diferenca=i-j;
	}else if(j>i){
		diferenca=j-i;
	}
	printf("Diferenca = %d", diferenca);
	return 0;
}
