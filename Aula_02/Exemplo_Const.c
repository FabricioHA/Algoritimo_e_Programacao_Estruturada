/*Variáveis constantes
Esse tipo de variável não pode ter seu valor alterado uma vez definido, ou seja, 
niguem pode alterá-lo no decorrer da execução do código, sendo bem útil
quando um valor precisa ser imutável, garantindo também que hacker não possam alterar
o valor facilmente.

Podemos fazer uma constante de duas formas:

utilizando o método #define <nome_da_constante> <valor>

ela deve ser declarada após a inclusão das bibliotecas, nem ponto e virgula na sua
declação. Outro ponto util é que ela não ocupa espaço na memória, apenas rotula um
valor associado a ela.

Outra forma de criar valores constantes é declarar como uma variável convencional, 
com o diferencial que a mesma deve ter "const" na antes da declaração.

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
	
	printf("=======Exibição de Constantes=======");
	printf("\n\nPI = %f", PI);
	printf("\nG = %f", G);
	printf("\ncirclRadius = %d degree\n\n", circleRadius);
	
	system("pause");
	return 0;
}
