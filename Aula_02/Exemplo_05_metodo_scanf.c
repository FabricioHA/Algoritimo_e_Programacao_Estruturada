/*
Abaixo temos um exemplo utilizando scanf, uma fun��o do stdio.h
para ler valores digitados pelo usu�rio:

nota: a fun��o scanf serve bem para imprimir os valores individualmente, mas por 
defini��o, o scanf ir� ler uma variavel at� encontrar um space in white (espa�o) 
dentro do texto
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	
    int idade[3] = {0, 0, 0};
    float media = 0.0;
    
    printf("\nInforme a idade da pessoa 1: ");
    scanf("%d", &idade[0]);
    printf("\nInforme a idade da pessoa 2: ");
    scanf("%d", &idade[1]);
    printf("\nInforme a idade da pessoa 3: ");
    scanf("%d", &idade[2]);
    
    media = (idade[0] + idade[1] + idade[2]) / 3;
    
	printf("\nM�dia de idade = %.0f", media);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
