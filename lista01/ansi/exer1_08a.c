#include <stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/
#include <stdlib.h>  /*Biblioteca para funções de sistema (system, exit, etc)*/

#define QTD_ALUNOS_C 60 /*Por convenção se usa o nome de constantes em maiúsculo*/
#define QTD_ALUNOS_D 20

int main(){
    
    int qtd_repro_c,qtd_repro_d;
    float perc_repro_c,perc_apro_d,perc_repro_total;

    /*Função para configurar a região com idioma Português */
    setlocale(LC_ALL, "Portuguese");
    
    /*Função system executa comandos do sistema*/
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
     *  Nesta expressão temos um caso de conversão de tipos
     * como a constante 100 foi escrita como 100.0 os tipos inteiros são convertidos para float.
     * Se a constante fosse escrita como int, 100, então seria necessário reescrever essa expressão
     * da seguinte maneira:
     *      perc_repro_total =(float) (qtd_repro_c+qtd_repro_d)*100/(QTD_ALUNOS_C+QTD_ALUNOS_D);
     * onde (float) é um cast, termo usado para forçar o compilador a converter para algum tipo
     * específico. Experimente alterar a expressão, usando 100 com e sem o cast, observe o resultado.
     * */
        
    printf("\nReprovados na turma C: %d\n",qtd_repro_c);
    printf("\nReprovados na turma D: %d\n",qtd_repro_d);
    printf("\nPorcentagem total de reprovados: %.2f\n",perc_repro_total);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do último scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}