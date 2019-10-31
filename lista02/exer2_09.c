#include<stdio.h>

int main(void){
    float altura,peso;
    int sexo;

    printf("\nAltura:");
    scanf("%f",&altura);

    printf("\nSexo?\n 1:M\n 2:F\n");
    scanf("%d",&sexo);

    if(sexo==1){
        peso = 62.1*altura-44.7;
    }else{
        peso = 72.7*altura - 58;
    }
    
    printf("\nPeso Ideal: %.3f\n",peso);
    return 0;
}