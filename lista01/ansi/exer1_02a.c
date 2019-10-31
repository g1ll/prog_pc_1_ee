/*CODIFICA��O DE CARACTER ANSI*/
#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

int main(){
    int numFilhos;
    float valorHoras,salario,qtdHoras;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme a quantidade de horas trabalhadas em um m�s: ");
    scanf("%f",&qtdHoras);

    printf("\nInforme o valor por hora: ");
    scanf("%f",&valorHoras);

    printf("\nInforme a quantidade de filhos menor do que 14 anos: ");
    scanf("%d",&numFilhos);

    salario = qtdHoras*valorHoras;
    salario = salario + salario * numFilhos * .02;
    
    printf("\nO sal�rio final � R$ %.2f\n\n",salario);

    return 0;
}
