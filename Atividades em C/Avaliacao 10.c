#include <stdio.h>
#include <math.h>
#define TAM 12

/*
ATIVIDADE 10
Montar uma matriz quadrada de tamanho 12x12 e numeros inseridos pelo usuario maiores que 1 (se ele digitar valores abaixo de 1, informe que não é aceito e peça para digitar novamente)
Multiplique cada valor da diagonal principal por 6 se primo ou por 4 se não primo e mostre a matriz
Divida cada valor da diagonal secundaria por 5 se par ou por 7 se impar e mostre a matriz
Adicione todos os valores resultantes de cada multiplicacao e divisao dos itens anteriores e os valores da antepenúltima coluna maiores que 13 à um vetor e mostre-o.
*/

int main()
{
    int lin, col, a, var, c, primo;
    a = TAM * 3;
    float VETOR_1[a], MATRIZ_X[TAM][TAM], i;

    printf("\t     LOGICA COM MATRIZES\n\n    Digite cada um dos VALORES da matrize:\n\n");
    
    //Adicionando Valores maiores que 1 na matriz 1
	printf("\n\n\tMATRIZ 1:\n\n", a);
	for(lin = 0; lin < TAM; ++lin){
	    for(col = 0; col < TAM; ++col){
	        MATRIZ_X[lin][col] = 0;
	        while(MATRIZ_X[lin][col] <= 1){
	            printf("\t\tVALOR[%d,%d]= ", lin, col);
	            scanf("%g", &MATRIZ_X[lin][col]);
	            if(MATRIZ_X[lin][col] <= 1){
	                printf("Valor nao aceito! Por favor, digite valores MAIORES que 1\n");
	            }
	    	}
	    }
	}
	    
	printf("\n\n\t\t");
	for(lin = 0; lin < TAM; ++lin){
	    for(col = 0; col < TAM; ++col){
	        printf("[ %g ]", MATRIZ_X[lin][col]);
	    }
	    printf("\n\t\t");
	}
	
    //Verificando se eh primo, multiplicando e apresentando a matriz
    for(lin = 0; lin < TAM; ++lin){
		for(i = 2; i <= MATRIZ_X[lin][lin] / 2; i++){
		    if(fmod(MATRIZ_X[lin][lin], i) == 0) {
		       primo++;
		    }
		}
		 
		if(primo == 0){
	    	MATRIZ_X[lin][lin] = MATRIZ_X[lin][lin] * 4;
		}
	 	else{
			MATRIZ_X[lin][lin] = MATRIZ_X[lin][lin] * 6;
		}
		VETOR_1[lin] = MATRIZ_X[lin][lin];
	}
    
	printf("\n\n\tMultiplicando primos e nao primos da diagonal principal:");
	printf("\n\n\t\t");
	for(lin = 0; lin < TAM; ++lin){
	    for(col = 0; col < TAM; ++col){
	        printf("[ %g ]", MATRIZ_X[lin][col]);
	    }
	    printf("\n\t\t");
	}
	
	//Verificando se eh par, dividindo e apresentando a matriz
	c = TAM - 1;
	for(lin = 0; lin < TAM; ++lin){
		
		if(fmod(MATRIZ_X[lin][c], 2) == 0){
			MATRIZ_X[lin][c] = MATRIZ_X[lin][c] / 5;
		} else{
			MATRIZ_X[lin][c] = MATRIZ_X[lin][c] / 7;
		}
		VETOR_1[lin + TAM] = MATRIZ_X[lin][c];
		c--;
	}
	
	printf("\n\n\tDividindo pares e impares da diagonal secundaria:");
    printf("\n\n\t\t");
	for(lin = 0; lin < TAM; ++lin){
	    for(col = 0; col < TAM; ++col){
	        printf("[ %g ]", MATRIZ_X[lin][col]);
	    }
	    printf("\n\t\t");
	}
    
    //Identificando os elementos da coluna 9 maiores que 13.
	printf("\n\n\tValores da coluna 9 maiores que 13:", a);
	var = 0;
	for(lin = 0; lin < TAM; ++lin){
		VETOR_1[lin + (TAM * 2)] = 0;
		if(MATRIZ_X[lin][9] > 13){
		    printf("\n\n\t\tVALOR[%d,9]=%g \n\n", lin, MATRIZ_X[lin][9]);
		    VETOR_1[lin + (TAM * 2)] = MATRIZ_X[lin][9];
		    var++;
		}
	}
	if(var == 0){
		printf("\n\n\t\t[Nenhum valor menor que 13]");
	}
	
	//Apresentando o Vetor 1
	printf("\n\n\n\tVetor 1:");
	printf("\n\n\t\t");
	for(lin = 0; lin < a; ++lin){
	    printf("[ %g ]", VETOR_1[lin]);
	}
    
    return 0;
}
    




































