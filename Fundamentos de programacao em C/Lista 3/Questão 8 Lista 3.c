/*
QUESTAO 8 LISTA 3
Construa um algoritmo para ler salarios de 10 funcionários de uma empresa e depois calcular e informar:
	- maior salario;
	- menor salario;
	- media salarial;
	- imposto de renda, levando em consideração (até R$ 1.500 – isento; maior que R$ 1.500 e menor ou
	  igual a R$ 2.000 – descontar 10%; maior que R$ 2.000 – descontar 15%);
	- salário liquido a receber;
*/

#include <stdio.h>

int main(void) {
	
	int i, salario[11], media=0;
    
    for(i=1; i<=10; ++i){
		printf("Pessoa %d: \n\tSalario= ", i);
		scanf("%d", &salario[i]);
		media=media+salario[i];
	}
	media=media/10;
	
	int salario_maior=salario[1], salario_menor=salario[1];
	for(i=1; i<=10; ++i){
		if(salario[i]>salario_maior){
			salario_maior=salario[i];
		}
		
		if(salario[i]<salario_menor){
			salario_menor=salario[i];
		}
	}
	
	printf("\n\nMaior salario = %d\nMenor salario = %d\n\nMedia salarial = %d\n", salario_maior, salario_menor, media);
	printf("\nImposto de Renda:");
	for(i=1; i<=10; ++i){
		printf("\n\tPessoa %d: ", i);
		if(salario[i]>2000){
			printf("descontar 15%");
			salario[i]=salario[i]*75/100;
		} else if(salario[i]>1500){
			printf("descontar 10%");
			salario[i]=salario[i]*90/100;
		} else printf("isento");
	}
	
	printf("\n\nSalario liquido:");
	for(i=1; i<=10; ++i){
		printf("\n\tPessoa %d: = %d", i, salario[i]);
	}
	
    return 0;
}
