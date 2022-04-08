#include <stdio.h>

/*
Atividade 7 | PRODUTO DE DOIS VETORES
Adicionar e mostar 2 vetores inseridos pelo usuario e o produto deles deve ser adicionado em zig-zag até o centro(posicao 0,-1,1,-2,2...) em um 3º vetor 
Mostre todos os vetores ao usuario
*/
int main()
{
    int Tamanho, i, var;
    float VETOR_1[Tamanho], VETOR_2[Tamanho], VETOR_3[Tamanho];

    printf("\t    PRODUTO DE DOIS VETORES\n\nDigite o TAMANHO dos vetores e cada um de seus VALORES:\n\n");
    
    printf("\t\tTAMANHO = ");
    scanf("%d", &Tamanho);
    
    printf("\n\n\tVETOR 1:\n\n");
    for(i = 0; i < Tamanho; ++i){
        printf("\t\tVALOR %d = ", i);
        scanf("%f", &VETOR_1[i]);
    }
    printf("\n\n\tVETOR 2:\n\n");
    for(i = 0; i < Tamanho; ++i){
        printf("\t\tVALOR %d = ", i);
        scanf("%f", &VETOR_2[i]);
    }
    
    var = 0;
    for(i = 0; i < Tamanho; ++i){
        VETOR_3[i - var] = VETOR_1[i] * VETOR_2[(Tamanho - 1) -i];
        ++i;
        if(i<Tamanho){
        	VETOR_3[Tamanho - i + var] = VETOR_1[i] * VETOR_2[(Tamanho -1) -i];
        	++var;
    	}
    }
    
    printf("\n\n\tVETOR 1:  |");
    for(i = 0; i < Tamanho; ++i){
        printf(" %g |", VETOR_1[i]);
    }
    printf("\n\n\tVETOR 2:  |");
    for(i = 0; i < Tamanho; ++i){
        printf(" %g |", VETOR_2[i]);
    }
    printf("\n\n\tVETOR 3:  |");
    for(i = 0; i < Tamanho; ++i){
        printf(" %g |", VETOR_3[i]);
    }
    printf("\n\n\tPOSSICAO: |");
    for(i = 0; i < Tamanho; ++i){
        printf(" %d |", i);
    }

    return 0;
}
    
































