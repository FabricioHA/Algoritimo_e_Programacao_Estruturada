/*Perceba no exemplo anterior que podemos reutilizar esses métodos várias vezes
ao longo do código em grande escala. 

Para podermos reutilizar várias vezes, podemos criar uma função como readString(),
que irá fazer esse trabalho:*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_ALL, "");
	
}
