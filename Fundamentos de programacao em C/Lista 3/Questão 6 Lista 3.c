/*
QUESTAO 6 LISTA 3
Fazer um algoritmo para calcular e imprimir a media aritmética de 10 alunos, tendo
como dados de entrada 3 notas semestrais. Depois imprimir situação do aluno que deve
obedecer ao seguinte critério: (media maior ou igual a 7, “aprovado”; entre 4 e 6.9, “AF”;
menor que 4, “reprovado”), depois imprimir a media geral da turma;
*/

#include <stdio.h>

int main(void) {
	
	int i, c;
	float nota[11][3], media[11], MediaGeral;
    
    for(i=1; i<=10; ++i){
		printf("Aluno %d: \n", i);
		media[i]=0;
		
		for(c=0; c<=2; ++c){
			printf("\tNota %d: ", c+1);
			scanf("%f", &nota[i][c]);
			media[i]=media[i]+nota[i][c];
		}
		media[i]=media[i]/3;
	}
	
	printf("\nSituacao:");
	MediaGeral=0;
	
	for(i=1; i<=10; ++i){
		printf("\n\tAluno %d: ", i);
		if(media[i]>=7){
			printf("aprovado");
		} else if(media[i]>=4){
			printf("AF");
		} else printf("reprovado");
		MediaGeral=MediaGeral+media[i];
	}
    MediaGeral=MediaGeral/10;
	printf("\n\nMedia Geral = %2.f", MediaGeral);
    
    return 0;
}
