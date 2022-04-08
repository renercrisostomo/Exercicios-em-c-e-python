#include <stdio.h>
#define TAM 12
/*
Atividade 8 - LOGICA COM MATRIZES

Escreva um programa em C que permite ao usuário digitar números reais maiores que 3.73 para preencher as matrizes A[12x12] e matriz B[12x12]. Além disso, o programa deverá calcular e mostrar na sequência, os resultados dos itens a seguir:

- Fazer o produto entre as duas matrizes e armazenar em uma 3a matriz;
- Multiplicar os elementos da diagonal principal da matriz A pela diagonal secundária da matriz B e armazenar na diagonal principal de uma 4a matriz. Os outros elementos serão da 3a matriz;
- Identificar os elementos de todas as matrizes que são maiores 52% do que o valor da média geral das matrizes resultantes dos itens I e II. Fazer os cálculos individualmente para cada matriz resultate dos itens I e II.

Obs.: inicie mostrando os elementos das matrizes que foram digitados pelo usuário. Depois, cada item deve ter seu resultado mostrado antes de calcular o próximo item.
*/

int main()
{
    int lin, col, a, c;
    float MATRIZ_1[TAM][TAM], MATRIZ_2[TAM][TAM], MATRIZ_3[TAM][TAM], MATRIZ_4[TAM][TAM], MATRIZ_X[TAM][TAM], var, maiores;

    printf("\t     LOGICA COM MATRIZES\n\nDigite cada um dos VALORES das matrizes:\n\n");
    
    /*
    //Escolhendo o TAManho das matrizes
    printf("\t\tTAMANHO = ");
    scanf("%d", &TAM);
    printf("\t\tTAMANHO %dx%d",TAM, TAM);
    */
    
    //Adicionando Valores maiores que 3.73 para as matrizes 1 e 2
    for(a = 1; a <= 2; a++){
		printf("\n\n\tMATRIZ %d:\n\n", a);
	    for(lin = 0; lin < TAM; ++lin){
	        for(col = 0; col < TAM; ++col){
	        	MATRIZ_X[lin][col] = 0;
	            while(MATRIZ_X[lin][col] <= 3.73){
	                printf("\t\tVALOR[%d,%d]= ", lin, col);
	                scanf("%g", &MATRIZ_X[lin][col]);
	                if(MATRIZ_X[lin][col] <= 3.73){
	                    printf("Valor nao aceito! Por favor, digite valores MAIORES que 3.73\n");
	                }
	            }
			    if(a == 1){	
			    	MATRIZ_1[lin][col] = MATRIZ_X[lin][col]; //Usando o mesmo codigo para as duas matrizes
			    } else {
					MATRIZ_2[lin][col] = MATRIZ_X[lin][col];
				}
	        }
	    }
	    
	    printf("\n\n\t\t"); //Apresentando as duas matrizes
	    for(lin = 0; lin < TAM; ++lin){
	        for(col = 0; col<TAM; ++col){
	            printf("[ %g ]", MATRIZ_X[lin][col]);
	        }
	        printf("\n\t\t");
	    }
	}
	
    //Fazendo o produto entre a matriz 1 e 2 e armazenando na matriz 3
    var = 0;
    for(lin = 0; lin < TAM; ++lin){
	    for(col = 0; col < TAM; ++col){
			MATRIZ_3[lin][col] = 0;
			for(c = 0; c < TAM; ++c){
				var = var + (MATRIZ_1[lin][c] * MATRIZ_2[c][col]);
			}
			MATRIZ_3[lin][col] = var;
			var = 0;
		}
	}
    
	printf("\n\n\tMATRIZ 3:\n\n\t\t", a);
	for(lin = 0; lin < TAM; ++lin){
	    for(col = 0; col < TAM; ++col){
	        printf("[ %g ]", MATRIZ_3[lin][col]);
	    }
	    printf("\n\t\t");
	}
    
    //Adicionando a matriz 3 na 4 e multiplicando os elementos da diagonal principal da matriz 1 pela diagonal secundaria da matriz 2 e substituindo na diagonal principal da matriz 4
    for(lin = 0; lin < TAM; ++lin){
	        for(col = 0; col < TAM; ++col){
	            MATRIZ_4[lin][col] = MATRIZ_3[lin][col];
	    }
	}
    
    col = TAM - 1;
	for(lin = 0; lin < TAM; ++lin){
    	MATRIZ_4[lin][lin] = MATRIZ_1[lin][lin] * MATRIZ_2[lin][col];
    	col--;
	}
    
    printf("\n\n\tMATRIZ 4:\n\n\t\t", a);
	for(lin = 0; lin < TAM; ++lin){
	    for(col = 0; col < TAM; ++col){
	        printf("[ %g ]", MATRIZ_4[lin][col]);
	    }
	    printf("\n\t\t");
	}
    
    //Identificando os elementos 52% maiores do que o valor da media geral para cada uma das matrizes 3 e 4.
	for(a = 3; a <= 4; a++){
		var = 0;
		for(lin = 0; lin < TAM; ++lin){
		    for(col = 0; col < TAM; ++col){
		    	var = var + MATRIZ_3[lin][col];
		    }
		}
	    maiores = 1.52 * (var / (TAM * TAM));
	    
	    printf("\n\n\tValores maiores que 52 porcento da media da Matriz %d:", a);
	    for(lin = 0; lin < TAM; ++lin){
		    for(col = 0; col < TAM; ++col){
		    	if(MATRIZ_3[lin][col] > maiores){
		    		printf("\n\n\t\tVALOR[%d,%d]=%g \n\n", lin, col, MATRIZ_3[lin][col]);
				}
		    }
		}
		
		for(lin = 0; lin < TAM; ++lin){
	    	for(col = 0; col < TAM; ++col){
				MATRIZ_3[lin][col] = MATRIZ_4[lin][col];
			}
		}
	}
    
    return 0;
}
    




































