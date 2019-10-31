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

    printf("\nInforme a temperatura em Celsius (�C): ");
    scanf("%f",&temp_celsius);

    temp_fahr = 9*temp_celsius/5 + 32;
    
    printf("\nA temperatura em Fahrenheit (�F) � %.2f \n\n",temp_fahr);

    printf("\n-------------------------------------\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear"); 
    return 0;
}