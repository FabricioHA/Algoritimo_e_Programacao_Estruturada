#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int x = 10;

void testar()
{
	x = 2 * x;
}

int main()
{
	setlocale(LC_ALL, "");
	printf("\nValor de x global = %d", x);
	testar();
	printf("\nValor de x global alterado em testar() = %d\n\n", x);
	
	system("PAUSE");
	return 0;
}
