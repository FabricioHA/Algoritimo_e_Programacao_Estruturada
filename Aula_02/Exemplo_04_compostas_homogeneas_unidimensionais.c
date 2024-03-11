/*
Variaveis compostas tamb�m podem ser unidimensionais, possuindo 1 coluna e v�rias linhas.
Esses valores podem estar es espa�os diferentes da mem�ria, mas possuem o mesmo r�tulo
referente a sua variavel.

variaveis homog�neas unidemensionais s�o chamadas de vetor ou matriz unidimensional
sua sintaxe seria:

<tipo> <nome_do_vetor>[tamanho];

Uma vez definido o tamanho/quantidade dos blocos a ser utilizado, o mesmo n�o pode ser
alterado ao longo da execu��o do c�digo.

como no aquivo anterior, podemos atribuir valores individualmente indicando qual indice
o receber�:
*/

#include <stdio.h>
#include <windows.h>
int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); // Biblioteca Windows.h
	system("color 0A");
	float altura[3];
	
	altura[0] = 1.5;
	altura[1] = 1.8;
	altura[2] = 2.02;
	
	printf("====Atribuir valor individualmente ao indices====\n");
	printf("\nAltura do vetor 0, medindo %.2fcm", altura[0]);
	printf("\nAltura do vetor 1, medindo %.2fcm", altura[1]);
	printf("\nAltura do vetor 2, medindo %.2fcm\n\n", altura[2]);
	
	system("PAUSE");
	return 0;
}
