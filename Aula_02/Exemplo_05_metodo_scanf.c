/*
Abaixo temos um exemplo utilizando scanf, uma função do stdio.h
para ler valores digitados pelo usuário:

nota: a função scanf serve bem para imprimir os valores individualmente, mas por 
definição, o scanf irá ler uma variavel até encontrar um space in white (espaço) 
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
    
	printf("\nMédia de idade = %.0f", media);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
