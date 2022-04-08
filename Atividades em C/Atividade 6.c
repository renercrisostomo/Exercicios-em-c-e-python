#include <stdio.h>

/*
Atividade 6 | MEDIA PONDERADA E CONCEITO - FUNCOES
Verifique da nota do aluno com base na media ponderada envolvendo: Trabalho(45%), Avaliação Parcial(20%) e Avaliação Final(35%)

Condição | Conceito
----- | -----  
 MP>=8 | A1
 8>MP>=7 | B2
 7>MP>=6 | C3
 6>MP>=5 | D4
 5>MP | 5E
*/

float MediaPonderada_Funcao(float Trabalho, float AvaliacaoParcial, float AvaliacaoFinal);
void Conceito(float MediaPonderada);

int main()
{
    float Trabalho, AvaliacaoParcial, AvaliacaoFinal;

    printf("\tMEDIA PONDERADA E CONCEITO\n\nDigite a sua nota no TRABALHO, AVALIACAO PARCIAL e na AVALIACAO FINAL:\t\t>Lembre-se de usar pontos ao inves de virgulas!\n\n");
    
    printf("\tTRABALHO = ");
    scanf("%f", &Trabalho);
    printf("\tAVALIACAO PARCIAL = ");
    scanf("%f", &AvaliacaoParcial);
    printf("\tAVALIACAO FINAL = ");
    scanf("%f", &AvaliacaoFinal);
    
    float MediaPonderada = MediaPonderada_Funcao(Trabalho, AvaliacaoParcial, AvaliacaoFinal);
    printf("\n\tCONCEITO = ");
    Conceito(MediaPonderada);
    
    return 0;
}

float MediaPonderada_Funcao(float Trabalho, float AvaliacaoParcial, float AvaliacaoFinal)
{
    float MediaPonderada = ((Trabalho*45)+(AvaliacaoParcial*20)+(AvaliacaoFinal*35))/100;
    printf("\n\tMEDIA PONDERADA = %f", MediaPonderada);
    
    return MediaPonderada;
}
    
void Conceito(float MediaPonderada)
{
    if ((MediaPonderada>10)||(MediaPonderada<0)){
        printf("Por favor, insira todas as notas com numeros de 0 a 10 e tente novamente.");
    } else if(MediaPonderada>=8){
        printf("A1");
    } else if(MediaPonderada>=7){
        printf("B2");
    } else if(MediaPonderada>=6){
        printf("C3");
    } else if(MediaPonderada>=5){
        printf("D4");
    } else printf("5E");
}























