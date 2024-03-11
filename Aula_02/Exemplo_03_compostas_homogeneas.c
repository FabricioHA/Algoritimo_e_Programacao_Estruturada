/*Variaveis compostas s�o vari�veis que podem armazenar mais de um valor 
dentro delas, ou melhor, taxar v�rios espa�os na mem�ria com sua identifica��o.

Com isso, elas s�o capazes de, por exemplo, em vez de reservar um bloco de 4bytes para,
uma vari�vel int, reservar v�rios blocos de 4bytes com seu mesmo nome por interm�dio
de indices, como se eu separasse varias gavetas (blocos) de um arm�rio (mem�rio) 
apenas para guardar cuecas.

As vari�veis compostas podem lidar com um formato de linha e coluna, como se fossem
matrizes.

Temos dois tipos de vari�veis compostas:

Homog�neas e heterog�neas

as v�riaveis do tipo homog�nea podem ser ilustradas da seguinte forma:

a: variaveis convencionais
indice da v�riavel	valor da variavel
|0|					| 8434 |


b: variaveis homogeneas
Indices da v�rival	valor da variavel
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
	system("title Exemplo compostas homog�neas");
	system("color 0A");
	
	float altura[3] = {1, 1.5, 1.7};
	
	printf("======vetores homog�neos======\n");
	printf("\nAltura vetor 0 de %.2f", altura[0]);
	printf("\nAltura vetor 1 de %.2f", altura[1]);
	printf("\nAltura vetor 3 de %.2f\n\n", altura[2]);
	
	system("PAUSE");
	return 0;
}
