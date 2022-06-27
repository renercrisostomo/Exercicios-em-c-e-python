/*
Questão 13 Lista 1
Fazer um algoritmo para ler dois números inteiros e trocar seus valores; (ex.: A e B; valor de A passa para o B e valor de B passa para o A); e depois imprimir os novos valores de cada variável.
*/
#include <stdio.h>  

int main(void){
	int A, B, C;

	printf("digite A e B\n");
	scanf("%d",&A);
	scanf("%d",&B);
	C = A;
	A = B;
	B = C;
	printf("A = %d", A);
	printf("B = %d", B);
    return 0; 
}
