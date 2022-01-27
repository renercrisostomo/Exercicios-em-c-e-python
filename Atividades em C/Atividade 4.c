#include <stdio.h>

int main()
{
    /*
    Atividade 4 | CLASSIFICAR TRIANGULO (LADOS)
    Indicar o tipo de triangulo comparando o tamanho dos lados fornecido pelo usuario
    */
    
    float A, B, C;

    printf("\tTIPOS DE TRIANGULOS | ANALISANDO A MEDIDA DOS LADOS\n\nDigite um numero positivo e aperte ENTER, ao inserir cada lado do triangulo:\n\n");
    
    printf("Lado A = ");
    scanf ("%f", &A);

    printf("Lado B = ");
    scanf ("%f", &B);

    printf("Lado C = ");
    scanf ("%f", &C);
  
    if((A+B>=C) && (A+C>=B) && (B+C>=A)){
        printf("\nTipo do triangulo: ");
        if((A==B) && (B==C)){
            printf("Equilatero (Todos os lados iguais)");
        }
        else if((A!=B) && (A!=C) && (B!=C)){
            printf("Escaleno (Todos os lados diferentes)");
        }
        else printf("Isosceles (2 lados iguais)");
    }
    else printf ("\nEssas medidas nao formam um triangulo.");
    
    return 0;
}



