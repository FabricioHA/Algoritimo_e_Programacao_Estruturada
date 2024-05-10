#include <stdio.h>
#include <locale.h>

int x = 10;

int main()
{
	setlocale(LC_ALL, "");
	int x = -1;
	int b;
	{
		extern int x;
		b = x;
	}
	printf("\nValor de x = %d", x);
	printf("\nValor de b (x global) = %d", b);
	
	return 0;
}
