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
		printf("\nVoc� escolheu a cor azul, seu desconto ser� de 30 por cento\n\n"); 
		desc = 30; 
		break;
		 
		case 'v': 
		printf("\nVoc� escolheu a cor vermelha, seu desconto ser� de 20 por cento\n\n"); 
		desc = 20; 
		break; 
		
		case 'b': 
		printf("\nVoc� escolheu a cor branca, seu desconto ser� de 10 por cento\n\n"); 
		desc = 10; 
		break; 
		
		default: 
		printf("\nOpc�o inv�lida, n�o ser� concedido desconto\n\n");
		desc = 0;
	}
	system("PAUSE");
	return 0;
}
