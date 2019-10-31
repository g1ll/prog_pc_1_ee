#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

int main(){
    float salario_base,reajuste,salario_final;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o sal�rio do funcion�rio: ");
    scanf("%f",&salario_base);

    printf("\nInforme o percentual de reajuste (0 - 100%%): ");
    scanf("%f",&reajuste);

    salario_final = salario_base+salario_base*reajuste/100;
    
    printf("\nO sal�rio final � R$ %.2f\n\n",salario_final);

    return 0;
}