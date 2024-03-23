/*
Estrutura de repeti��o com teste Do While

No While, a condi��o ser� verdadeira enquanto a sua condi��o for
verdadeira, executando o loop for verdadeiro, ele executar� at� que se 
torne falso.

Sua sintaxe seria:

while (condi��o)
{
	comando 1;
	comando 2;
	comando 3;
}

Pode ser que criemos um loop infinito, gerando um bug no programa,
para que isso n�o aconte�a, fazemos os seguintes procedimentos:

-contador: Controla quantas repeti��es foram utilizadas no loop

-Incremento e decremento: trabalham o n�mero do contador, aumentando
ou diminuindo  valor

-condi��o de parada: ela determina o limite do loop, tornando a falsa
quando o valor ultrapassa o limite do loop, como por exemplo:

*/

#include <stdio.h>

int main()
{
	int count = 0;
	
	while (count < 10) //Ele ir� contar at� count ser igual a 10
	{
		printf("contou %d\n", count+1); //ele imprine o valor +1 para 
		//imprimir corretamente ao usu�rio o n�mero de linhas 
		//impressas, uma vez que C conta a partir de 0
		
		count++; // isso � igual a count = count+1;
	}
	return 0;
}


/*
No caso acima, o contador � o count, indicando quantas repeti��es 
foram executadas.

a condi��o de parada � o parametro do while, sendo "count < 10",
onde ao se tornar falso para de executar o loop.

o incremento � a atribui��o de valor da variavel contadora, que ser�
incrementado a cada loop.
*/
