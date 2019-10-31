#include<stdio.h>   /*Biblioteca padr�o do C para fun��es de entrada e sa�da (printf, scanf, etc...)*/
#include<math.h>    /*Biblioteca para fun��es matem�ticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include<locale.h>  /*Biblioteca para configura��es regionais, acentos, formato de n�meros etc*/

/*Apesar dos compiladores novos suportarem "void main()" o correto � a retornar um inteiro,
desta forma retornamos zero no final do programa. Retornar zero significa que o programa executou sem erros.
*/
int main() {
	int a,b,c;
	float area_tri,area_qua,area_ret;
	double area_cir;

	/*Fun��o para configurar a regi�o com idioma Portugu�s */
	setlocale(LC_ALL, "Portuguese");

	printf("\nInforme um valor para A: ");
	scanf("%d",&a);

	printf("\nInforme um valor para B: ");
	scanf("%d",&b);

	printf("\nInforme um valor para C: ");
	scanf("%d",&c);

	printf("\nValores Informados: \n\tA = %d\n\tB = %d\n\tC = %d\n",a,b,c);

	area_tri = a*b/2;
	area_qua = b*b;
	area_ret = area_tri*2;
	area_cir = M_PI*pow(c,2);

	printf("\na) �rea do tri�ngulo: %.2f\n",area_tri);
	printf("\nb) �rea do quadrado: %.2f\n",area_qua);
	printf("\nc) �rea do ret�ngulo: %.2f\n",area_ret);
	printf("\nd) �rea do tri�ngulo: %f\n\n",area_cir);

	return 0;   /*Inform ao sitema que executou o nosso programa que tudo ocorreu bem*/
}
