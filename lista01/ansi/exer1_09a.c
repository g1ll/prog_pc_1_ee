#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

int main(){
    
    const float PRECO=2.5;
    float km_ini,km_fim,litros,valor,lucro,consumo;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme a marca��o inicial do od�metro (Km): ");
    scanf("%f",&km_ini);
    printf("\nInforme a marca��o final do od�metro (Km): ");
    scanf("%f",&km_fim);
    printf("\nInforme a quantidade de combust�vel (L): ");
    scanf("%f",&litros);
    printf("\nInforme o valor total recebido (R$): ");
    scanf("%f",&valor);
    
    lucro = valor-PRECO*litros;
    consumo = (km_fim-km_ini)/litros;

    printf("\nA m�dia de consumo � %.2f Km/L.",consumo);
    printf("\nO lucro do dia � R$ %.2f. \u2126",lucro);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}