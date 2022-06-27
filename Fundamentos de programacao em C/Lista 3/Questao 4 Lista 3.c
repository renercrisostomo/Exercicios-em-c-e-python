/*
QUESTAO 4 LISTA 3
Fazer um algoritmo para ler 10 números inteiros quaisquer e informar quantos e quais são os números primos.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, contDiv=0, contPrimo=0, i, div, numero[10], primo[10];
	
	for(i=0; i<10; ++i){
		printf("Numero %d = ", i+1);
		scanf("%d", &n);
		numero[i]=n;
	}
	
	for(i=0; i<10; ++i){
		for (i = 2; i <= num / 2; i++) {
		    if (num % i == 0) {
		       resultado++;
		    }
		}
		 
		if (resultado == 0)
		    printf("%d é um número primo\n", num);
		else printf("%d não é um número primo\n", num);
		
		for(div=2, contDiv=0; div<sqrt(numero[i]) && contDiv==0; ++div){
			if(numero[i]%div==0){
				++contDiv;	
			}	
		}
		
		if(contDiv!=0){
			printf("\tNUMERO PRIMO");
			++contPrimo;
			primo[i]=numero[i];
		}
	}
	
	printf("\n\nQUANTIDADE DE NUMEROS PRIMOS = %d\n", contPrimo);
	for(i=0; i<=contPrimo; ++i){
		printf("| %d", primo[i]);
	}
    return 0;
}


