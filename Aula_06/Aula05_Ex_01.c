#include <stdio.h>
#include <locale.h>
#include <windows.h>

int somar(n1, n2)
{
	return n1+n2;
}

int main()
{
	system("color 0A");
	setlocale(LC_ALL,"");
	int resultado = 0;
	int n1 = 0;
	int n2 = 0;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	
	resultado = somar(n1, n2);
	printf("O resultado da função é = %d", resultado);
	return 0;
}
