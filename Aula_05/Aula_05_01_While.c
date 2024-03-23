/*
Estrutura de repetição com teste Do While

No While, a condição será verdadeira enquanto a sua condição for
verdadeira, executando o loop for verdadeiro, ele executará até que se 
torne falso.

Sua sintaxe seria:

while (condição)
{
	comando 1;
	comando 2;
	comando 3;
}

Pode ser que criemos um loop infinito, gerando um bug no programa,
para que isso não aconteça, fazemos os seguintes procedimentos:

-contador: Controla quantas repetições foram utilizadas no loop

-Incremento e decremento: trabalham o número do contador, aumentando
ou diminuindo  valor

-condição de parada: ela determina o limite do loop, tornando a falsa
quando o valor ultrapassa o limite do loop, como por exemplo:

*/

#include <stdio.h>

int main()
{
	int count = 0;
	
	while (count < 10) //Ele irá contar até count ser igual a 10
	{
		printf("contou %d\n", count+1); //ele imprine o valor +1 para 
		//imprimir corretamente ao usuário o número de linhas 
		//impressas, uma vez que C conta a partir de 0
		
		count++; // isso é igual a count = count+1;
	}
	return 0;
}


/*
No caso acima, o contador é o count, indicando quantas repetições 
foram executadas.

a condição de parada é o parametro do while, sendo "count < 10",
onde ao se tornar falso para de executar o loop.

o incremento é a atribuição de valor da variavel contadora, que será
incrementado a cada loop.
*/
