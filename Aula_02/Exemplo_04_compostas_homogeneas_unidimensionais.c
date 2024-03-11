/*
Variaveis compostas também podem ser unidimensionais, possuindo 1 coluna e várias linhas.
Esses valores podem estar es espaços diferentes da memória, mas possuem o mesmo rótulo
referente a sua variavel.

variaveis homogêneas unidemensionais são chamadas de vetor ou matriz unidimensional
sua sintaxe seria:

<tipo> <nome_do_vetor>[tamanho];

Uma vez definido o tamanho/quantidade dos blocos a ser utilizado, o mesmo não pode ser
alterado ao longo da execução do código.

como no aquivo anterior, podemos atribuir valores individualmente indicando qual indice
o receberá:
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
