/*
QUESTAO 8 LISTA 2
Faça um algoritmo que recebe a média final de um aluno e imprima o seu conceito, conforme a tabela abaixo:

Média | Conceito
de 0,0 a 4,9  | D
de 5,0 a 6,9  | C
de 7,0 a 8,9  | B
de 9,0 a 10,0 | A
*/

#include <stdio.h>

int main(void)
{
	float media;
	printf("Media = ");
	scanf("%f",&media);
	if ((media>10)||(media<0)){
        printf("Por favor, insira a media com numeros de 0 a 10 e tente novamente.");
    } else if(media>=9){
        printf("Conceito: A");
    } else if(media>=7){
        printf("Conceito: B");
    } else if(media>=5){
        printf("Conceito: C");
    } else printf("Conceito: D");
	return 0;
}
