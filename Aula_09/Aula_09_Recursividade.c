/*
Como visto na aula passada, a fun��o recursiva � capaz de chamar a si mesmo, onde devemos
definir um ponto de parada para que a mesma possa ser executada com limites:

<tipo> funcaoRecursiva()
{
	//comandos
	funcaoRecursiva();
	//comandos
}

void main()
{
	//comandos
	funcaoRecursiva();
	//comandos
}

Ou seja, sua �nica diferen�a � que ela chama a s� mesma.

no entanto, o resultado retornado dessa fun��o � completamente
diferente.

Em uma fun��o recursiva, devemos criar uma recursividade e ponto de
parada.

a fun��o apresenta em seu corpo variaveis e comandos que s�o 
alocados na mem�ria. a recursividade faz com que ela seja alocada
em outras partes da mem�ria. Ou seja, quando chamo essa fun��o
outro espa�o � alocado para elas fora da fun��o em si.

as variaveis chamadas nessa recursividade s�o independentes, ou
seja, mesmo as vari�veis nomedas igualmente s�o diferente e alocam
espa�os diferentes na mem�ria, com cada uma tendo seu pr�prio
endere�o.

Veja abaixo como � feita a recursividade na pr�tica:

instancia 1
funcaoRecursiva()
{
	variavel1;
	variavel2;
	//comandos
	funcaoRecursiva()
	//comandos
	return valor;
}

instancia 2
funcaoRecursiva()
{
	variavel1;
	variavel2;
	//comandos
	funcaoRecursiva()
	//comandos
	return valor;
}

instancia 1
funcaoRecursiva()
{
	variavel1;
	variavel2;
	//comandos
	funcaoRecursiva()
	//comandos
	//ponto de parada
	
	return valor;
}

Ou seja, � como se ela fosse transitando em v�rias instancias das
fun��es at� chegar ao ponto de parada, onde ela voltaria novamente
para retornar o valor a instancia prim�ria:

#include<stdio.h>
int somar(int valor) {
    if(valor == 0) {
        //crit�rio de parada
        return valor;
    } else {
        //chamada recursiva
        return valor + somar(valor - 1); 
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um n�mero inteiro positivo : ");
    scanf("%d", &n);
    resultado = somar(n); // primeira chamada da fun��o
    printf("\nResultado = %d",resultado);
    return 0;
}

Perceba que o retorno da primeira inst�ncia � 2+?, pois ainda n�o se conhece o reultado 
da fun��o. Na segunda instancia, ela chama novamente a si mesma, retornando o valor - 1.
Veja que o retorno fica 1+?, pois ainda n�o se conhece o resultado da fun��o. Na terceira
inst�ncia, o crit�rio de parada � satisfeito, retornando zero. esse valor ser� usado pela
inst�ncia anterior, que ap�s soma 1+0, somara 2+1, retornando o valor para a fun��o 
principal, fechando assim o ciclo de recursividade.

				-----------------			   -------
				|				| 			  |		 |		
			instancia 1			|>	instancia 1 	 |>	instancia 3
main  <|    Somar(2)				Somar(1)			somar(0)
	  ------Return 2+?;	  <|		return 1+?;	 <|		return 0;			
							------------|		  -------|
							
A recursividade pode sim ser subistituida por for e visse e verssa, mas as fun��es 
recursivas podem acabar consumindo mais mem�ria, que as estruturas iterativas (repeti��es).

Podemos usar resolver um fatorual qualquer N que consiste em multiplica��es sucessivas
at� que Nseja igual ao valor unit�rio, ou seja, que resulta 120.


#include<stdio.h>
int fatorial(int valor) {
    if(valor != 1) { 
        //chamada recursiva
        return valor * fatorial(valor - 1); 
    } else {
        //crit�rio de parada
        return valor;
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("\nResultado = %d", resultado);
    return 0;
}

-Recursividade em cauda

Ess mecanismo � custoso ao computador, pois tem que alocar recursos para as vairiaveis e
comandos da fun��o. O procedimento � chamado de empilhamento, al�m de ter que armazenar
o local onde foi feita, a chamada da fun��o. Para usar a mem�ria de forma mais otimizada,
existe uma alternativa chamada recursividade em cauda. Esse tipo de recursividade funcionar�
como uma fun��o iterativa (for, while, etc.)

Chamar a si mesmo em recursividade em cauda � a ultima opera��o executada dentro de seu
corpo. O caso base normalmente costuma a ser passado como par�metro, o que resultarpa em 
comportamento diferente.

Para entender, vamps implementar o calculo do fatorial usando essa t�cnica:

Ela passa o crit�rio da parada e o que precisa ser calculado junto. para tal, �
criado uma fun��o auxiliar para tal:

#include<stdio.h>
int fatorialCauda(int n) {
    return fatorialAux(n, 1);
}
 
int fatorialAux(int n, int parcial) {
    if (n != 1) {
        return fatorialAux(n - 1, parcial * n);
    } else {
        return parcial;
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorialCauda(n);
    printf("\nResultado do fatorial = %d", resultado);
    return 0;
}
*/

