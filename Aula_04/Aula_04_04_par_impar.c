#include <stdio.h> //Inclui scanf(), printf(), fgets()
#include <locale.h> //Ajusta caracteres especiais
int main() 
{ 
	setlocale(LC_ALL, "");
	system("color 0A");
	system("title Exercicio 04 - par e impar");
	//Declara��o de variaveis
	int num; 
	
	//Entrada de dados
	printf ("\nDigite um n�mero inteiro: "); 
	scanf ("%d", &num); 
	
	//Processamento l�gico e sa�da
	if (num % 2 == 0) //Nesse caso, se a divis�o do n�mero digitado for 0, ele ser� par, pois n�o ter� resto, se for impar, ir� sobrar algum resto
	{ 
		printf ("\nO n�mero � par\n\n"); 
	} 
	else 
	{ 
		printf ("\nO numero � �mpar\n\n"); 
	}
	system("PAUSE");
	return 0; 
}

