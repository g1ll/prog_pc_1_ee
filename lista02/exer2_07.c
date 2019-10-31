#include<stdio.h>

int main(void){
    int n1,n2;

    printf("\nn1:");
    scanf("%d",&n1);

    printf("\nn2:");
    scanf("%d",&n2);

    if(n1>n2)
        printf("\n%d %d\n",n2,n1);
    else
        printf("\n%d %d\n",n1,n2);

    return 0;
}