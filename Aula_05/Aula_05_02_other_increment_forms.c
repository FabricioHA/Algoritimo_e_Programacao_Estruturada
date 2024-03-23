/*
Outras formas de incrementa��o de valores seria algo como:

count = count + 1; "Literalmente count++, sua forma resumida"
count += 1; "sua extrutura � igual a que est� acima"

esses tipos de atrbui��o s�o chamados de atribui��o composta.

como por exemplo:
*/

//Verificar se nota est� entre 0 e 10

#include <stdio.h>  //Adiciona printf e scanf
#include <locale.h>

int main() //Define uma fun��o principal com parametros vazios
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
			printf("\n\nNota inv�lida, digite sua nota novamente: ");
			scanf("%f", &nota);
		}
		else
		{
			printf("\n\nSua nota final %.2f est� validada!", nota);
			parar = 1;
		}
	}
	return 0;
}
