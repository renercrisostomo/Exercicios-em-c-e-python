/*
Questão 14 Lista 1
Faça um algoritmo que calcule e imprima o An de uma P.A. (Progressão Aritmética), segundo a fórmula: An = a1 + (n-1) * r.
*/
#include <stdio.h>  
int main(void) {
	int a1, r, n, An;

	printf("digite a1, r e n\n");
	scanf("%d",&a1);
	scanf("%d",&r);
	scanf("%d",&n);
	An = a1+(n-1)*r;
	printf("An = %d", An);
	return 0; 
}
