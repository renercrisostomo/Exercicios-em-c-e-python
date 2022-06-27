/*
QUESTAO 5 LISTA 3
Faça um algoritmo que leia a data de nascimento de 10 pessoas, depois calcule a
idade de cada uma, informando-a. E, por último, mostre qual a pessoa mais jovem e a mais velha do grupo.
*/

#include <stdio.h>
#include <time.h>

int main(void) {
	
	int data[11][3], Idade[11], dias[11], Velho=0, Novo=0, i;
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    data[0][0] = tm.tm_mday;
    data[0][1] = tm.tm_mon + 1;
    data[0][2] = tm.tm_year + 1900;
    printf("Data Atual: %d/%d/%d\n", data[0][0], data[0][1], data[0][2]);
    dias[0] = 365*data[0][2] + 30*data[0][1] + data[0][0];
    
    printf("\nData de Nascimento:");
    for(i=1; i<=10; ++i){
		printf("\n\tPessoa %d = Dia: ", i);
		scanf("%d", &data[i][0]);
		printf("\t\t   Mes: ");
		scanf("%d", &data[i][1]);
		printf("\t\t   Ano: ");
		scanf("%d", &data[i][2]);
		dias[i] = 365*data[i][2] + 30*data[i][1] + data[i][0];
		Idade[i] = (dias[0]-dias[i])/365;
	}
	
	printf("\nIdades:");
	int dias_menor=dias[0]-dias[1], dias_maior=dias[0]-dias[1];
	for(i=1; i<=10; ++i){
		printf("\n\tPessoa %d = %d ano(s)", i, Idade[i]);
		dias[i] = dias[0]-dias[i];
		if(dias[i]>dias_maior){
			dias_maior=dias[i];
			Velho=i;
		}
		
		if(dias[i]<dias_menor){
			dias_menor=dias[i];
			Novo=i;
		}
	}
    
	printf("\n\nMais Velha = Pessoa %d\nMais Nova = Pessoa %d", Velho, Novo);
    
    return 0;
}


