/*
Questão 11 Lista 1
Faça um algoritmo para ler o preço unitário e a quantidade de um produto e imprimir o valor total desse produto.
*/
#include <stdio.h>  

int main(void) {
	int quantidade;
	float preco, Total;

	printf("digite o preco e a quantidade\n");
	scanf("%f", &preco);
	scanf("%d", &quantidade);
	Total = preco * quantidade;
	printf("Total = %f", Total);
    return 0; 
}
