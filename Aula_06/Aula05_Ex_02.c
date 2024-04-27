#include <stdio.h>
#include <locale.h>
#include <windows.h>

float multiplicarNum()
{
	float n1=0, n2=0;
	printf("\nDigite o primeiro número: ");
	scanf("%f", &n1);
	
	printf("\nDigite o segundo número: ");
	scanf("%f", &n2);
	
	return n1 * n2;
}

int main()
{
	system("color 0A");
	setlocale(LC_ALL, "");
	float resultado = 0;
	resultado = multiplicarNum();
	printf("O valor multiplicado é %.2f", resultado);
	return 0;
}
