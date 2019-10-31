#include<stdio.h>

int main(void){
    int num;
    char * s;//String com ponteiro para char

    printf("\nNum:");
    scanf("%d",&num);
    
    s = (num%2==0)?"par":"impar";//operador ternário (teste)?true:false;
    
    printf("\nO numero %d eh %s !\n",num,s);
    return 0;
}