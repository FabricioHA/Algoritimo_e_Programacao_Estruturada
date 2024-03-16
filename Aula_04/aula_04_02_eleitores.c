/*Eleitores*/

#include <stdio.h>
#include <locale.h> //Bilblioteca para ajustes de caracteres
int main()
{
	setlocale(LC_ALL, ""); //Ajusta caracteres especiais
	// Your code here!
	int eleitor1 = 0;
	int eleitor2 = 0;
	do
	{
		printf("Digite a idade 1: ");
		scanf("%d", &eleitor1);
		
		printf("Digite a idade 2: ");
		scanf("%d", &eleitor2);	
	}while(eleitor 1 != );
	
	
	if (eleitor1 >= 18 && eleitor2 >=18) 
	{
		printf("\n %d %d ", eleitor1, eleitor2);
	}
	else
	{
		printf("\n Não eleitores");
	}
return 0;
}
