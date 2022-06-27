/*
Questão 10 Lista 1
Faça um algoritmo para ler 3 números inteiros, depois calcular e imprimir a média aritmética destes.
*/
#include <stdio.h>  

int main(void) {
    int a, b, c;
    float media;

	printf("digite a, b e c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	media = (a+b+c)/3;
	printf("media = %f", media);
    return 0; 
}
