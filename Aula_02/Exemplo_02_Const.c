/*Vari�veis constantes
Esse tipo de vari�vel n�o pode ter seu valor alterado uma vez definido, ou seja, 
niguem pode alter�-lo no decorrer da execu��o do c�digo, sendo bem �til
quando um valor precisa ser imut�vel, garantindo tamb�m que hacker n�o possam alterar
o valor facilmente.

Podemos fazer uma constante de duas formas:

utilizando o m�todo #define <nome_da_constante> <valor>

ela deve ser declarada ap�s a inclus�o das bibliotecas, nem ponto e virgula na sua
decla��o. Outro ponto util � que ela n�o ocupa espa�o na mem�ria, apenas rotula um
valor associado a ela.

Outra forma de criar valores constantes � declarar como uma vari�vel convencional, 
com o diferencial que a mesma deve ter "const" na antes da declara��o.

const <tipo> <nome_da_variavel_constante> = <valor>;
*/

#include <stdio.h>
#include <locale.h>
 
#define PI 3.14
#define circleRadius 360
int main()
{
	setlocale(LC_ALL, "");
	system("title Exemplo constantes");
	system("color 0A");
	const float G = 9.80;
	
	printf("=======Exibi��o de Constantes=======");
	printf("\n\nPI = %f", PI);
	printf("\nG = %f", G);
	printf("\ncirclRadius = %d degree\n\n", circleRadius);
	
	system("pause");
	return 0;
}
