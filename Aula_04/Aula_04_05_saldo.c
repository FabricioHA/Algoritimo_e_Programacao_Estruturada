/*switch case*/
#include <stdio.h> 
int main(){ 
	
	int n; 
	
	printf("\n(1) para Saldo\n(2) para Extrato\n(3) para Saque\n(4) para Sair\n para imposto(5)"); 
	printf("\nInforme a operação desejada: "); 
	scanf("%d", &n); 
	
	switch(n) 
	{ 
		case 1: 
			printf("\nSaldo"); 
			break; 
		case 2: 
			printf("\nExtrato"); 
			break; 
		case 3: 
			printf("\nSaque"); 
			break; 
		case 4: 
			printf("\nSair"); 
			break; 
		case 5:
			printf("\nImposto");
		    break;
		default: 
			printf("\nInválido"); 
	}
	return 0;
}
