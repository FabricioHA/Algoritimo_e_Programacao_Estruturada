#include <stdio.h> //Inclui scanf(), printf(), fgets()
#include <locale.h> //Ajusta caracteres especiais

int main() 
{
	setlocale(LC_ALL, "");
	system("color 0A");
	system("title Aula_04_01 Orçamento");
	float orcamento = 0; 
	printf("\nDigite o valor do orcamento para viagem: "); 
	scanf("%f", &orcamento); 
	
	if (orcamento >= 10000) 
	{ 
		printf("\nJoão e Maria possuem orçamento para uma viagem internacional\n\n"); 
	} 
	else 
	{ 
		printf("\nJoão e Maria irão optar por uma viagem nacional\n\n"); 
	}
	system("PAUSE");
	return 0; 
}

