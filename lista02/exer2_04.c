/*charset UTF-8*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){

    float num1,num2;

    setlocale(LC_ALL,"Portuguese");
    system("clear");

    printf("\nInforme um valor: ");
    scanf("%f",&num1);
    printf("\nInforme outro valor: ");
    scanf("%f",&num2);
    
    if(num1<num2)
        num1=num2;
   
    printf("\nO número %.2f  é o maior.",num1);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();getchar();
    system("clear");
    return 0;
}