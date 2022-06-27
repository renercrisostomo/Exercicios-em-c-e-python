/*
QUESTAO 2 LISTA 3
Fazer um algoritmo para calcular e imprimir o fatorial de um número qualquer
fornecido pelo usuário.
(lembrando: fatorial de 0! = 1; fatorial de 1! = 1; Fatorial de N! = (N * N-1!);
*/

#include <stdio.h>

int main(void)
{
	int numero, i;
	
	printf("Numero = ");
	scanf("%d",&numero);
	
	int fatorial=numero;
	for(i=1; i<numero; ++i){
		fatorial=fatorial*(numero-i);
	}
	printf("\n\n%d! = %d", numero, fatorial);
    return 0;
}


