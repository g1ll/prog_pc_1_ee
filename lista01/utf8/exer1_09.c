#include <stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/
#include <stdlib.h>  /*Biblioteca para funções de sistema (system, exit, etc)*/

int main(){
    
    const float PRECO=2.5;
    float km_ini,km_fim,litros,valor,lucro,consumo;

    /*Função para configurar a região com idioma Português */
    setlocale(LC_ALL, "Portuguese");
    
    /*Função system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme a marcação inicial do odômetro (Km): ");
    scanf("%f",&km_ini);
    printf("\nInforme a marcação final do odômetro (Km): ");
    scanf("%f",&km_fim);
    printf("\nInforme a quantidade de combustível (L): ");
    scanf("%f",&litros);
    printf("\nInforme o valor total recebido (R$): ");
    scanf("%f",&valor);
    
    lucro = valor-PRECO*litros;
    consumo = (km_fim-km_ini)/litros;

    printf("\nA média de consumo é %.2f Km/L.",consumo);
    printf("\nO lucro do dia é R$ %.2f \u2126.",lucro);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do último scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}
