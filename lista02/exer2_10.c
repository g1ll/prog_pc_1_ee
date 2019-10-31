#include<stdio.h>

int main(void){
    int num;

    printf("\nNum:");
    scanf("%d",&num);
    printf("\nO numero %d eh ",num);
    if(num%2==0)
        printf("par!\n");
    else
        printf("impar!\n");
        
    return 0;
}