/*
QUESTAO 7 LISTA 3
Faça um algoritmo para ler o peso e altura de 10 pessoas, em seguida, deve-se exibir
o resultado, conforme os dados da tabela abaixo.
*/

#include <stdio.h>

int main(void) {
	
	int i;
	float IMC[11];
    
    for(i=1; i<=10; ++i){
		printf("Pessoa %d: \n\tIMC= ", i);
		scanf("%f", &IMC[i]);
	}
	
	printf("\nClassificacao:");
	
	for(i=1; i<=10; ++i){
		printf("\n\tPessoa %d: ", i);
		if(IMC[i]>=40){
			printf("Obesidade Grau III ou Morbida");
		} else if(IMC[i]>=35){
			printf("Obesidade Grau II");
		} else if(IMC[i]>=30){
			printf("Obesidade Grau I");
		} else if(IMC[i]>=25){
			printf("Sobrepeso");
		} else if(IMC[i]>=18.5){
			printf("Peso Normal");
		} else printf("Abaixo do Peso");
	}
	
    return 0;
}
