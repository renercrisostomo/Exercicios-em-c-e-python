/******************************************************************************

QUESTAO 5 LISTA 4
O sistema do governo quer verificar um grupo de empregados apto para a aposentadoria ou não.
Para estar em condições, os seguintes requisitos devem ser satisfeitos: - Ter no mínimo 65 anos de
idade e ter trabalhado no mínimo 35 anos – homens; ter 60 anos de idade e ter trabalhado 30 anos - mulheres.
Com base nessas informações, faça um algoritmo que leia (para 6 empregados): o nome, sexo, ano de nascimento e
os anos de contribuições. O programa deverá escrever: nome, idade, sexo e o tempo de trabalho de cada empregado
com a mensagem 'Apto para aposentadoria' ou 'Não apto para aposentadoria'.

*******************************************************************************/

#include <string.h>
#include <stdio.h>

int main(void) {
	
	int Idade[6], TempoDeTrabalho[6], i;
    char nome[6][100] = {""};
	char sexo[6][6] = {""};
	    
    for(i=0; i<=0; ++i){
		printf("Pessoa %d: \n\tNome: ", i+1);
		scanf("%s", &nome[i]);
		printf("\tIdade: ");
		scanf("%d", &Idade[i]);
		printf("\tSexo(M|F): ");
		scanf("%s", &sexo[i]);
		printf("\tTempo de Trabalho: ");
		scanf("%d", &TempoDeTrabalho[i]);
	}
	
	for(i=0; i<=0; ++i){
		printf("\n\nPessoa %d: \n\tNome: %s; Idade: %d; Sexo: %s; Tempo de Trabalho: %d\n", i+1);
		
		if((sexo[i]=="M" && Idade[i]>=65 && TempoDeTrabalho[i]>=35)||(sexo[i]=="F" && Idade[i]>=60 && TempoDeTrabalho[i]>=30)){
			printf("Apto para aposentadoria");
		} else {
			printf("Nao apto para aposentadoria");
		}
	}
	
    return 0;
}


