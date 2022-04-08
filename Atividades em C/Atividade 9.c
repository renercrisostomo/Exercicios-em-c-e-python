#include <stdio.h>

/*
ATIVIDADE 9 - SISTEMA DE NOTAS E FREQUENCIA
Fazer uma matriz dos estudantes com as notas de cada avaliação, média e frequencia (o numero de estudantes, avaliações, notas e frequencia é inserido pelo usuario)
Calcule a media geral da turma
*/

int main()
{
    int EST, AVA, col;
    float var, media, maiores;

    printf("\t     SISTEMA DE NOTAS E FREQUENCIA\n\n\tDigite o que for pedido:\n\n");
    
    //Adicionando Valores na MATRIZ
    printf("\t\tNumero de Estudantes= ");
    scanf("%d", &EST);
    printf("\t\tNumero de Avaliacoes= ");
    scanf("%d", &AVA);
    col = AVA + 2;
	
    int i,j;
    float MATRIZ[EST][col];
    
	printf("\n\n\tNOTA[ ESTUDANTE , AVALIACAO ]\n\n");
	for(i = 0; i < EST; ++i){
		media = 0;
	    for(j = 0; j < AVA; ++j){
	        printf("\t\tNOTA[%d,%d]= ", i + 1, j + 1);
	        scanf("%g", &MATRIZ[i][j]);
	        media += MATRIZ[i][j];
		}
		MATRIZ[i][col - 1] = (media / AVA);
	}
	printf("\n\n");
	
	printf("\n\n\tFREQUENCIA[ ESTUDANTE ]\n\n");
	for(i = 0; i < EST; ++i){
		printf("\t\tFREQUENCIA[%d]= ", i + 1);
		scanf("%d", &MATRIZ[i][col]);
	}
	
	//Apresentando a MATRIZ
	printf("\n\n\t\t"); 
	for(i = 0; i < EST; ++i){
	    for(j = 0; j < col; ++j){
	    	printf("[ %g ]", MATRIZ[i][j]);
	    }
	    printf("\n\t\t");
	}
	
	//Media Geral da Turma
	for(i = 0; i < EST; ++i){
		media += MATRIZ[i][col - 1];
	}
	media = (media / EST);
	printf("\n\t\tMEDIA GERAL = %g", media);
	
	return 0;
}
























