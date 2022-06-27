/******************************************************************************

QUESTAO 7 LISTA 4
A prefeitura de uma cidade deseja fazer uma pesquisa para coletar dados sobre o
salário e número de filhos de cada habitante. Faça um algoritmo para ler os dados de
5 habitantes e escrever:
a) Média de salário da população;
b) Média do número de filhos;
c) Percentual de pessoas com salário menor que R$ 1000,00.


*******************************************************************************/

#include <stdio.h>

int main(void) {
	
	int Dados[5][2], i;
    float MediaSalarial=0, MediaFilhos=0, MenoresQue1000=0;
    
    for(i=0; i<=4; ++i){
		printf("Pessoa %d: \n\tSalario = ", i+1);
		scanf("%d", &Dados[i][0]);
		printf("\tNumero de Filhos = ");
		scanf("%d", &Dados[i][1]);
		
		MediaSalarial+=Dados[i][0];
		MediaFilhos+=Dados[i][1];
		if(Dados[i][0]<1000){
			++MenoresQue1000;
		}
	}
	MediaSalarial/=5;
	MediaFilhos/=5;
	MenoresQue1000*=100/5;
	
	printf("\n\tMedia Salarial = %f", MediaSalarial);
	printf("\n\tMedia do numero de Filhos = %f", MediaFilhos);
	printf("\n\tPercentual de salarios menores que 1000 = %f", MenoresQue1000);
    return 0;
}
