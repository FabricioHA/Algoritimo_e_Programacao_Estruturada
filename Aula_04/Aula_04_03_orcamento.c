#include <stdio.h> //Inclui scanf(), printf(), fgets()
#include <locale.h> //Ajusta caracteres especiais

int main() 
{
	setlocale(LC_ALL, "");
	system("color 0A");
	system("title Aula_04_01 Or�amento");
	float orcamento = 0; 
	printf("\nDigite o valor do orcamento para viagem: "); 
	scanf("%f", &orcamento); 
	
	if (orcamento >= 10000) 
	{ 
		printf("\nJo�o e Maria possuem or�amento para uma viagem internacional\n\n"); 
	} 
	else 
	{ 
		printf("\nJo�o e Maria ir�o optar por uma viagem nacional\n\n"); 
	}
	system("PAUSE");
	return 0; 
}

