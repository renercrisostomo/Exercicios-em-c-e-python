/*
Questão 15 Lista 1
Faça um algoritmo para calcular e imprimir o An de uma P.G. (Progressão Geométrica), segundo a fórmula: an = a1.qn-1;
*/
#include <stdio.h>  
#include <math.h>

int main(void){
	int a1, q, n, An;

	printf("digite a1, q e n\n");
	scanf("%d",&a1);
	scanf("%d",&q);
	scanf("%d",&n);
	An = a1*pow(q, (n-1));
	printf("An = %d", An);
	return 0;
}
