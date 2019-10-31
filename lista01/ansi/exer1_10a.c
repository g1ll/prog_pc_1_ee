#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

int main(){
    
    const float COMISSAO=0.15;
    int n_empregados,n_bike;
    float salario_min, pre_bike,salario_final,lucro;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme a quantidade de empregados:");
    scanf("%d",&n_empregados);
    printf("\nInforme o sal�rio m�nimo (R$): ");
    scanf("%f",&salario_min);
    printf("\nInforme custo de cada bike (R$): ");
    scanf("%f",&pre_bike);
    printf("\nInforme a quantidade e bikes vendidas: ");
    scanf("%d",&n_bike);
    
    salario_final = 2*salario_min+n_bike*pre_bike*COMISSAO/n_empregados;
    lucro = n_bike*pre_bike*1.5-n_bike*pre_bike-salario_final*n_empregados;

    printf("\nO sal�rio final � R$ %.2f.",salario_final);
    printf("\nO lucro da loja � R$ %.2f.",lucro);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}
