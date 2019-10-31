#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

/*Exemplo de constante com o preprocessador #define
#defini COBERTURA 1.5
*/

int main(){
    
    /*Constantes s�o valores que n�o mudam e podem ser defindos de duas formas
    usando o 'const type NOME = valor' ou preprocessador #define NOME valor' antes do main
        */
    const float COBERTURA = 1.5;
    float comp,largura, altura,area_total,qtd_caixas;


    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o comprimento da cozinha: ");
    scanf("%f",&comp);

    printf("\nInforme a largura da cozinha: ");
    scanf("%f",&largura);

    printf("\nInforme a altura da cozinha: ");
    scanf("%f",&altura);

    area_total = 2*largura*altura+2*comp*altura;
    qtd_caixas = area_total/COBERTURA;
    
    printf("\nPara cobrir a �rea de  %.2f m� da cozinha ser�o necess�rias %.2f caixas.\n\n",area_total,qtd_caixas);

    printf("\n-------------------------------------\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear"); 
    return 0;
}