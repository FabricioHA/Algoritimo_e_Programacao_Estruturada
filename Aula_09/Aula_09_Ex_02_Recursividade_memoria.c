#include <stdio.h>
#include <locale.h>

int fatorial(int valor)
{
	if(valor !=1)
	{
		//chamada recursiva
		return valor * fatorial(valor-1);
	}
	else
	{
		//crit�rio de parada
		return valor;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int n, resultado;
	printf("\nDigite um n�mero inteiro positivo: ");
	scanf("%d", &n);
	
	resultado = fatorial(n);
	printf("\nResultado = %d", resultado);
	return 0;
}
