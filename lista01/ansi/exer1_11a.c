#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

int main(){
    
    float comp,qtdvoltas, qtdreab;
	float concar,litros,comptotal;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o comprimento da pista (m):");
    scanf("%f",&comp);
    printf("\nInforme a quantidade de voltas: ");
    scanf("%f",&qtdvoltas);
    printf("\nInforme o n�mero de reabastecimentos: ");
    scanf("%f",&qtdreab);
    printf("\nInforme o consumo do carro: ");
    scanf("%f",&concar);
    
    comptotal = comp*qtdvoltas/1000; 
	litros = comptotal/concar;
	litros = litros/(qtdreab+1);

    printf("\nO minimo de litros �: %.2f L",litros);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}
