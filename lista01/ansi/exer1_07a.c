#include <stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/
#include <stdlib.h>  /*Biblioteca para fun��es de sistema (system, exit, etc)*/

int main(){
    
    int total_eleitores,nv_brancos,nv_nulos,nv_valios;
    float percBrancos,percNulos,percValidos;

    /*Fun��o para configurar a regi�o com idioma Portugu�s */
    setlocale(LC_ALL, "Portuguese");
    
    /*Fun��o system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o n�mero de eleitores: ");
    scanf("%d",&total_eleitores);

    printf("\nInforme o n�mero de votos brancos: ");
    scanf("%d",&nv_brancos);
    
    printf("\nInforme o n�mero de votos nulos: ");
    scanf("%d",&nv_nulos);

    printf("\nInforme o n�mero de votos v�lidos: ");
    scanf("%d",&nv_valios);

    percBrancos = nv_brancos*100/total_eleitores;
    percValidos = nv_valios*100/total_eleitores;
    percNulos   = nv_nulos*100/total_eleitores;


    printf("\nTotal de Eleitores: %d\n",total_eleitores);
    printf("\nVotos brancos: %d (%.2f %%)\n",nv_brancos,percBrancos);
    printf("\nVotos nulos: %d (%.2f %%)\n",nv_nulos,percNulos);
    printf("\nVotos v�lidos: %d (%.2f %%)\n",nv_valios,percValidos);

    printf("\n-------------------------------------\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}