#include <stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/
#include <stdlib.h>  /*Biblioteca para funções de sistema (system, exit, etc)*/

int main(){
    float salario_base,reajuste,salario_final;

    /*Função para configurar a região com idioma Português */
    setlocale(LC_ALL, "Portuguese");
    
    /*Função system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o salário do funcionário: ");
    scanf("%f",&salario_base);

    printf("\nInforme o percentual de reajuste (0 - 100%%): ");
    scanf("%f",&reajuste);

    salario_final = salario_base+salario_base*reajuste/100;
    
    printf("\nO salário final é R$ %.2f\n\n",salario_final);

    return 0;
}