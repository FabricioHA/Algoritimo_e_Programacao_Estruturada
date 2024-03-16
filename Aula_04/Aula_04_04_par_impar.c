#include <stdio.h> //Inclui scanf(), printf(), fgets()
#include <locale.h> //Ajusta caracteres especiais
int main() 
{ 
	setlocale(LC_ALL, "");
	system("color 0A");
	system("title Exercicio 04 - par e impar");
	//Declaração de variaveis
	int num; 
	
	//Entrada de dados
	printf ("\nDigite um número inteiro: "); 
	scanf ("%d", &num); 
	
	//Processamento lógico e saída
	if (num % 2 == 0) //Nesse caso, se a divisão do número digitado for 0, ele será par, pois não terá resto, se for impar, irá sobrar algum resto
	{ 
		printf ("\nO número é par\n\n"); 
	} 
	else 
	{ 
		printf ("\nO numero é ímpar\n\n"); 
	}
	system("PAUSE");
	return 0; 
}

