/*Sintaxe da condicional If/else

estrutura:

if(condicional)
{
	Processamento
}
else if(condicional)
{
	processamento
}
else
{
	processamente
}
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int idade;
	
	printf("\nDigite sua Idade: ");
	scanf("%d", &idade);
	
	if(idade >=18)
	{
		printf("\nVoc� j� pode tirar sua carteira de habilita��o, pois � maior de 18");
	}
	else
	{
		printf("\nVoc� � menor de idade, volte mais tarde");
	}
	return 0;
}
