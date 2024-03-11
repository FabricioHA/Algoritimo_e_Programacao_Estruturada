/*Variaveis compostas são variáveis que podem armazenar mais de um valor 
dentro delas, ou melhor, taxar vários espaços na memória com sua identificação.

Com isso, elas são capazes de, por exemplo, em vez de reservar um bloco de 4bytes para,
uma variável int, reservar vários blocos de 4bytes com seu mesmo nome por intermédio
de indices, como se eu separasse varias gavetas (blocos) de um armário (memório) 
apenas para guardar cuecas.

As variáveis compostas podem lidar com um formato de linha e coluna, como se fossem
matrizes.

Temos dois tipos de variáveis compostas:

Homogêneas e heterogêneas

as váriaveis do tipo homogênea podem ser ilustradas da seguinte forma:

a: variaveis convencionais
indice da váriavel	valor da variavel
|0|					| 8434 |


b: variaveis homogeneas
Indices da várival	valor da variavel
| 0 |				| 32 |
| 1 |				| -1 |
| 2 |				| 24 |
| 3 |				| 63 |
| 4 |				| 94 |
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "");
	system("title Exemplo compostas homogêneas");
	system("color 0A");
	
	float altura[3] = {1, 1.5, 1.7};
	
	printf("======vetores homogêneos======\n");
	printf("\nAltura vetor 0 de %.2f", altura[0]);
	printf("\nAltura vetor 1 de %.2f", altura[1]);
	printf("\nAltura vetor 3 de %.2f\n\n", altura[2]);
	
	system("PAUSE");
	return 0;
}
