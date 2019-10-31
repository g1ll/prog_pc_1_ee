#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

#define QTD_ALUNOS_C 60 /*Por conven��o se usa o nome de constantes em mai�sculo*/
#define QTD_ALUNOS_D 20

int main(){
    
    int qtd_repro_c,qtd_repro_d;
    float perc_repro_c,perc_apro_d,perc_repro_total;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o percentual de reprovados na turma C: ");
    scanf("%f",&perc_repro_c);
    printf("\nInforme o percentual de aprovados na turma D: ");
    scanf("%f",&perc_apro_d);

    qtd_repro_c = QTD_ALUNOS_C*perc_repro_c/100;
    qtd_repro_d = QTD_ALUNOS_D-(QTD_ALUNOS_D*perc_apro_d/100);
    perc_repro_total = (qtd_repro_c+qtd_repro_d)*100.0/(QTD_ALUNOS_C+QTD_ALUNOS_D);
    /**
     *  Nesta express�o temos um caso de convers�o de tipos
     * como a constante 100 foi escrita como 100.0 os tipos inteiros s�o convertidos para float.
     * Se a constante fosse escrita como int, 100, ent�o seria necess�rio reescrever essa express�o
     * da seguinte maneira:
     *      perc_repro_total =(float) (qtd_repro_c+qtd_repro_d)*100/(QTD_ALUNOS_C+QTD_ALUNOS_D);
     * onde (float) � um cast, termo usado para for�ar o compilador a converter para algum tipo
     * espec�fico. Experimente alterar a express�o, usando 100 com e sem o cast, observe o resultado.
     * */
        
    printf("\nReprovados na turma C: %d\n",qtd_repro_c);
    printf("\nReprovados na turma D: %d\n",qtd_repro_d);
    printf("\nPorcentagem total de reprovados: %.2f\n",perc_repro_total);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}