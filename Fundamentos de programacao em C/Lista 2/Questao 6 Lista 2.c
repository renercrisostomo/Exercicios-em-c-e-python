/*
QUESTAO 6 LISTA 2
Crie um algoritmo para ler 3 valores float e imprimir o quadrado do 1º + a soma dos outros dois.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	float i, j, x, r;
	printf("Numero 1 = ");
	scanf("%f",&i);
	printf("Numero 2 = ");
	scanf("%f",&j);
	printf("Numero 3 = ");
	scanf("%f",&x);
	r = pow(i , 2)+j+x;
	printf("Resultado = %f", r);
	return 0;
}
