#include <stdio.h>

int main(){
    printf("\n--------------------------------------------Calculadora de Juros Compostos-----------------------------------------------\n");

    int i, investimento, total=0, juro=0, j=0, idade=0, reforma=0;
    float taxa=0;

    printf("Insira a sua idade -> ");
    scanf("%d",&idade);

    printf("Insira idade de reforma -> ");
    scanf("%d",&reforma);

    printf("Insira quanto quer investir por mes -> ");
    scanf("%d",&investimento);

    printf("Insira a taxa de juro composto (em decimal) -> ");
    scanf("%f",&taxa);
    printf("\n");

    j=reforma-idade;
    investimento=investimento*12;

    for (i=1;i<j;i++){
        total=juro+investimento;
        juro=total*(taxa+1);
        printf("Ano %d -> %d €\n", i, juro);
    }

    printf("\n");

    printf("-> Ao fim de %d anos teríamos acumulado %d com um investimento de %d por ano a uma taxa de interesse de %f ao ano <-\n", i, juro, investimento, taxa);
    printf("\n--------------------------------------------------Signed by Chines-------------------------------------------------------\n");
}