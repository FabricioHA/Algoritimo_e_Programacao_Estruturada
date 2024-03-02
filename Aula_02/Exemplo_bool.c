#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int idade = 0;
	float salario = 1250.75;
	double porcentagem_desconto = 2.5;
	bool estaAprovado = false;
	char genero[1] = "M";
	system("cls");
	
	printf("\n\nIdade = %i, float = %.2f, Desconto = %f, Aprovação = %i, Genero = %s\n\n", idade, salario, porcentagem_desconto,  estaAprovado,genero); 
	system("PAUSE");
	return 0;
}
/*Lembrando que a variável */
