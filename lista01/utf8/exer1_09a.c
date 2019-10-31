#include <stdio.h>

int main(void){

    float kmi,kmf,litros,renda,mediacon,lucro;

    printf("\nKMI: ");
    scanf("%f",&kmi);

    printf("\nKMF: ");
    scanf("%f",&kmf);

    printf("\nlitros: ");
    scanf("%f",&litros);

    printf("\nRenda: ");
    scanf("%f",&renda);

    mediacon = (kmf-kmi)/litros;
    lucro = renda-litros*2.5;

    printf("\nMedia Consumo: %.2f",mediacon);
    printf("\nLucro: %.2f\n",lucro);

    return 0;
}