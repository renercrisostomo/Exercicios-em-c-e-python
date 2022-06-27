/******************************************************************************

QUESTAO 2 LISTA 4
A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que
trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular
com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas em um mês,
o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras,
caso tenham sido trabalhadas, em um total de 10 funcionários e depois mostre também qual destes obteve
maior número de horas trabalhadas. (considere um mês com 4 semanas exatas).

*******************************************************************************/

#include <stdio.h>

int main(void) {
	
	int i, HorasMes[11], SalarioPorHora, HoraMaior=HorasMes[1];
    float salario[11], SalarioExtra;
    
    printf("Salario por hora = ", SalarioPorHora);
    scanf("%d", &SalarioPorHora);
    SalarioExtra=SalarioPorHora+SalarioPorHora*50/100;
    
    for(i=1; i<=10; ++i){
		printf("Pessoa %d: \n\thoras trabalhadas no mes= ", i);
		scanf("%d", &HorasMes[i]);
		salario[i]=SalarioPorHora*HorasMes[i];
		
		if(HorasMes[i]>160){
			salario[i]+=SalarioExtra*(HorasMes[i]-160);
		}
		printf("\tsalario = %f\n", salario[i]);
	}
	
	for(i=1; i<=10; ++i){
		if(HorasMes[i]>HoraMaior){
			HoraMaior=HorasMes[i];
		}
	}
	printf("\n\nMaior hora = %d\n", HoraMaior);
	
    return 0;
}
