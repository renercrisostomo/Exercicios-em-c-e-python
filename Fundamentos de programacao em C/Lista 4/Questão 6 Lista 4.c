/******************************************************************************

QUESTAO 6 LISTA 4
Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive)
em ordem crescente, e depois, em ordem decrescente.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	
	int i;
    
    for(i=1; i<=10; ++i){
    	printf("%d\n", i);
    }
    for(i=10; i>=1; --i){
    	printf("%d\n", i);
    }

    return 0;
}
