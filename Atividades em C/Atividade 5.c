#include "stdio.h"

int main()
{
    /*
    Atividade 5 | TABELA (PESO/ALTURA)
        Classificar n pessoas com base nas condições na tabela:
         <=60  <=90  >90
           1A | 4D | 7G  <1.20
           2B | 5E | 8H  <=1.70
           3C | 6F | 9I  >1.70
    */
    
    int cont, pessoas;
    float PESO, ALTURA;

    printf("\tCLASSIFICACAO | PESO/ALTURA\n\nInsira o numero de PESSOAS a serem classificadas e aperte ENTER:\n\n\t\tPESSOAS = ");
    scanf("%d", &pessoas);
    
    printf("\n\nAgora, digite o PESO e ALTURA para cada uma das %d pessoas:\t\t>Lembre-se de usar pontos ao inves de virgulas!", pessoas);
    
    for(cont = 1; cont < pessoas + 1; cont++){
        
        printf("\n\n\t%d/%d) ----------------\n", cont, pessoas);
        
        printf("\t\tPESO(Kg) = ");
        scanf("%f", &PESO);
        printf("\t\tALTURA(m) = ");
        scanf("%f", &ALTURA);
        
        printf("\t\tCLASSIFICACAO: ");
        
        if(PESO <= 60){
            if(ALTURA < 1.20){
                printf("1A");
            } else if(ALTURA <= 1.70){
                printf("2B");
            } else printf("3C");
            
        } else if(PESO <= 90){
            if(ALTURA < 1.20){
                printf("4D");
            } else if(ALTURA <= 1.70){
                printf("5E");
            } else printf("6F");
            
        } else if(ALTURA < 1.20){
                printf("7G");
            } else if(ALTURA <= 1.70){
                printf("8H");
            } else printf("9I");
    }
    return 0;
}


















