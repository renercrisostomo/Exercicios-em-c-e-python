/*
Questão 12 Lista 1
Construa um algoritmo para calcular as raízes de uma equação do 2º. Grau (ax² + bx + c), sendo que A, B, e C são valores fornecidos pelo usuário.
*/
#include <stdio.h>  
int main(void) 
{
	float A, B, C, Delta, X1, X2;

	printf("digite A, B e C\n");
	scanf("%f",&A);
	scanf("%f",&B);
	scanf("%f",&C);
	Delta = B*B-4*A*C;
	if(Delta < 0){
		printf("NÃO POSSUI VALORES REAIS");
    }else{
		X1 = (-B+raiz(Delta))/2*A;
		X2 = (-B-raiz(Delta))/2*A;
		printf("X1 = %f", X1);
		printf("X2 = %f", X2);
    }
    return 0; 
}
