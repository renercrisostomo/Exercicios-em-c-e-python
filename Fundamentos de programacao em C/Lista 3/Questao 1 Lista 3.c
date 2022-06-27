/*
QUESTAO 1 LISTA 3
Fazer um algoritmo para ler 10 números digitados pelo usuário e depois informar qual maior valor e qual menor valor informado;
*/

#include <stdio.h>

int main(void)
{
	int numero[10], i;
	
	for(i=0; i<10; ++i){
		printf("Numero %d = ", i+1);
		scanf("%d",&numero[i]);
	}
	
	int maior=numero[0], menor=numero[0];
	for(i=1; i<10; ++i){
		if(numero[i]>maior){
			maior=numero[i];
		} else if(numero[i]<menor){
			menor=numero[i];
		}
	}
	printf("\n\nMaior = %d\nMenor = %d", maior, menor);
    return 0;
}


