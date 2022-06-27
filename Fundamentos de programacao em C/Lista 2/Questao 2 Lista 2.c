/*
QUESTAO 2 LISTA 2
Faça um algoritmo que receba o raio R de uma esfera e calcule o seu volume: V = (4 * Pi * R3)/3. 
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	float R, V, pi=3.14;
	printf("Raio = ");
	scanf("%f",&R);
	V=(4*pi*pow(R, 3))/3;
	printf("Volume = %f",V);
	return 0;
}

