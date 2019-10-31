#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

int main(){
    float temp_fahr, temp_celsius;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme a temperatura em Fahrenheit (�F): ");
    scanf("%f",&temp_fahr);

    temp_celsius = (temp_fahr-32)/9*5;
    
    printf("\nA temperatura em Celsius � %.2f �C\n\n",temp_celsius);

    return 0;
}