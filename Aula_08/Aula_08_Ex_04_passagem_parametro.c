#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar(int a, int b)
{
	return a + b;
}

int main()
{
	setlocale(LC_ALL, "");
	int resultado;
	resultado = somar(10, 15);
	printf("\nResultado da soma = %d", resultado);
	
	return 0;
}
