/*charset ANSI Western Windows-1252*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){

    float num;

    setlocale(LC_ALL,"Portuguese");
    system("clear");
    printf("\nInforme um valor:");
    scanf("%f",&num);

    if(num>=0)
        printf("\nO n�mero %.2f � POSITIVO.",num);
    else
        printf("\nO n�mero %.2f � NEGATIVO.",num);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}