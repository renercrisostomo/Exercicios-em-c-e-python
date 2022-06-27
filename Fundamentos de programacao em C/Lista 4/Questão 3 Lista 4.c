/******************************************************************************

QUESTAO 3 LISTA 4
Faça um algoritmo para ler o saldo de 5 clientes. Depois, deverá realizar operações de
débito e crédito: lê um crédito aleatório para cada cliente; realizar saque (débito qualquer) da
conta de cada cliente; (saldo_atual = crédito - débito). Também testar se saldo atual é suficiente para realizar o
saque, confirmando a operação, caso positivo, e negando a operação, caso negativo, mostrando a mensagem 'Saldo insuficiente'.
No final, deverá exibir o saldo atualizado de cada cliente.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	
	int i, saldo[6], credito, debito=50;
    
    for(i=1; i<=6; ++i){
		printf("Pessoa %d: \n\tSaldo Atual = ", i);
		scanf("%d", &saldo[i]);
	}
	
	for(i=1; i<=6; ++i){
		if(saldo[i]>=debito){
			saldo[i] = credito - debito;
		}
		printf("Pessoa %d: \n\tSaldo Atual = %d", saldo[i], i);
	}
	
    return 0;
}
