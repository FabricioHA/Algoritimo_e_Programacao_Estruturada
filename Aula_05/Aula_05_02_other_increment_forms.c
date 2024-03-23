/*
Outras formas de incrementação de valores seria algo como:

count = count + 1; "Literalmente count++, sua forma resumida"
count += 1; "sua extrutura é igual a que está acima"

esses tipos de atrbuição são chamados de atribuição composta.

como por exemplo:
*/

//Verificar se nota está entre 0 e 10

#include <stdio.h>  //Adiciona printf e scanf
#include <locale.h>

int main() //Define uma função principal com parametros vazios
{
	setlocale(LC_ALL, "");
	int parar = 0;
	float nota;
	
	printf("Digite a nota final do aluno: ");
	scanf("%f", &nota);
	
	while(parar != 1)
	{
		if(nota < 0 || nota > 10)
		{
			printf("\n\nNota inválida, digite sua nota novamente: ");
			scanf("%f", &nota);
		}
		else
		{
			printf("\n\nSua nota final %.2f está validada!", nota);
			parar = 1;
		}
	}
	return 0;
}
