/*
QUESTAO 3 LISTA 2
Faça um algoritmo que leia um valor inteiro e verifica se o valor é par ou ímpar, retornando um valor booleano.
*/

#include <stdio.h>

int main(void)
{
	int x, res;
	printf("Numero = ");
	scanf("%d",&x);
	res=x%2;
	if(res==0){
		printf("PAR");
	}else{
		printf("IMPAR");
	}
	return 0;
}


