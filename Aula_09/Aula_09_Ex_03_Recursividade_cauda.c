#include <stdio.h>
#include <locale.h>

int fatorialAux(int n, int parcial)
{
	if(n != 1)
	{
		printf("\nValor decrementado: %d", n);
		printf("\nValor da parcial: %d ", parcial);
		return fatorialAux(n - 1, parcial * n);
	}
	else
	{
		return parcial;
	}
}

int fatorialCauda(int n)
{
	return fatorialAux(n, 1);
}

int main()
{
	setlocale(LC_ALL, "");
	int n, resultado;
	printf("\nDigite um número inteiro positivo: ");
	scanf("%d", &n);
	
	resultado = fatorialCauda(n);
	printf("\nResultado do fatorial = %d", resultado);
	return 0;
}
