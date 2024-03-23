/*Do-While

O comando Do While é como a propria nomenclatura sugere:

fazer(do) enquanto(while)...

ou seja, ele ira executar um código enquanto a condicional for 
verdadeira. Sua sintaxe é:

do
{
	processos e entradas...
} while(condicional)

um exemplo disso seria:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	system("color 0A");
	setlocale(LC_ALL, "");
	int parar = 0;
	float nota;
	
	do
	{
		printf("Digite a nota final do aluno: ");
		scanf("%f", &nota);
		
		if(nota < 0 || nota > 10)
		{
			printf("\nNota inválida\n\n");
		}
		else
		{
			printf("\nNota válida, encerrando...\n\n");
			parar = 1;
		}
	} while(parar != 1);
	
	system("PAUSE");
	return 0;
}
