#include <stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/
#include <stdlib.h>  /*Biblioteca para funções de sistema (system, exit, etc)*/

int main(){
    
    float comp,qtdvoltas, qtdreab;
	float concar,litros,comptotal;

    /*Função para configurar a região com idioma Português */
    setlocale(LC_ALL, "Portuguese");
    
    /*Função system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o comprimento da pista (m):");
    scanf("%f",&comp);
    printf("\nInforme a quantidade de voltas: ");
    scanf("%f",&qtdvoltas);
    printf("\nInforme o número de reabastecimentos: ");
    scanf("%f",&qtdreab);
    printf("\nInforme o consumo do carro: ");
    scanf("%f",&concar);
    
    comptotal = comp*qtdvoltas/1000; 
	litros = comptotal/concar;
	litros = litros/(qtdreab+1);

    printf("\nO minimo de litros é: %.2f L",litros);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do último scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}
