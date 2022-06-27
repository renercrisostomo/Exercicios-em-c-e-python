/*
Questão 9 Lista 1
Faça um algoritmo para ler um número inteiro, depois calcular e imprimir a sua raiz quadrada e sua potenciação.
*/
#include <stdio.h>
#include <math.h>

int main(void){
	int numero;
	float raiz, potencia;
  		
	printf("digite o numero\n");
	scanf("%f", &numero);
	raiz = sqr(numero);
	printf("raiz quadrada = %f", raiz);
	potencia = pow(numero, 2);
	printf("Quadrado = %f", potencia);
	return 0;
}
