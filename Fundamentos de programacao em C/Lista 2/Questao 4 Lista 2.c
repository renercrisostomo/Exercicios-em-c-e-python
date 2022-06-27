/*
QUESTAO 4 LISTA 2
Crie um algoritmo que leia 3 números e imprima o maior valor.
*/

#include <stdio.h>

int main(void)
{
	int i, j, x;
	printf("Numero 1 = ");
	scanf("%d",&i);
	printf("Numero 2 = ");
	scanf("%d",&j);
	printf("Numero 3 = ");
	scanf("%d",&x);
	printf("Maior Valor = ");
	if(i>j){
		if(i>x){
			printf("%d", i);
		}else{
			printf("%d", x);
		}
	}else if(j>i){
		if(j>x){
			printf("%d", j);
		}else{
			printf("%d", x);
		}
	}else{
		if(i>x){
			printf("%d", i);
		}else{
			printf("%d", x);
		}
	}
	return 0;
}



