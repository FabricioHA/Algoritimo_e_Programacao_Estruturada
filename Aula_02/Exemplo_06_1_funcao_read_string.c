/*Perceba no exemplo anterior que podemos reutilizar esses m�todos v�rias vezes
ao longo do c�digo em grande escala. 

Para podermos reutilizar v�rias vezes, podemos criar uma fun��o como readString(),
que ir� fazer esse trabalho:*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_ALL, "");
	
}
