#include<stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include<math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include<locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/

/*Apesar dos compiladores novos suportarem "void main()" o correto é a retornar um inteiro,
desta forma retornamos zero no final do programa. Retornar zero significa que o programa executou sem erros.
*/
int main() {
	int a,b,c;
	float area_tri,area_qua,area_ret;
	double area_cir;

	/*Função para configurar a região com idioma Português */
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

	printf("\na) Área do triângulo: %.2f\n",area_tri);
	printf("\nb) Área do quadrado: %.2f\n",area_qua);
	printf("\nc) Área do retângulo: %.2f\n",area_ret);
	printf("\nd) Área do triângulo: %f\n\n",area_cir);

	return 0;   /*Inform ao sitema que executou o nosso programa que tudo ocorreu bem*/
}
