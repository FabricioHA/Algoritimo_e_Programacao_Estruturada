#include <stdio.h> 
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, "");
	system("color 0A");
	system("title Exercicio 06 switch case");
	
	char x; 
	float valor, desc, total; 
	
	printf("\n Digite o valor da compra: "); 
	scanf("%f", &valor); 
	
	printf("\n Digite a letra que representa o seu desconto de acordo com a cor: "); 
	printf("\n a. azul"); 
	printf("\n v. vermelho"); 
	printf("\n b. branco"); 
	printf("\n Digite sua opcao: "); 
	scanf("%s", &x); 
	
	switch(x) 
	{ 
		case 'a': 
		printf("\nVocê escolheu a cor azul, seu desconto será de 30 por cento\n\n"); 
		desc = 30; 
		break;
		 
		case 'v': 
		printf("\nVocê escolheu a cor vermelha, seu desconto será de 20 por cento\n\n"); 
		desc = 20; 
		break; 
		
		case 'b': 
		printf("\nVocê escolheu a cor branca, seu desconto será de 10 por cento\n\n"); 
		desc = 10; 
		break; 
		
		default: 
		printf("\nOpcão inválida, não será concedido desconto\n\n");
		desc = 0;
	}
	system("PAUSE");
	return 0;
}
