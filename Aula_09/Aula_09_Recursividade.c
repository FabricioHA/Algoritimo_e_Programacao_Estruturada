/*
Como visto na aula passada, a função recursiva é capaz de chamar a si mesmo, onde devemos
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

Ou seja, sua única diferença é que ela chama a sí mesma.

no entanto, o resultado retornado dessa função é completamente
diferente.

Em uma função recursiva, devemos criar uma recursividade e ponto de
parada.

a função apresenta em seu corpo variaveis e comandos que são 
alocados na memória. a recursividade faz com que ela seja alocada
em outras partes da memória. Ou seja, quando chamo essa função
outro espaço é alocado para elas fora da função em si.

as variaveis chamadas nessa recursividade são independentes, ou
seja, mesmo as variáveis nomedas igualmente são diferente e alocam
espaços diferentes na memória, com cada uma tendo seu próprio
endereço.

Veja abaixo como é feita a recursividade na prática:

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

Ou seja, é como se ela fosse transitando em várias instancias das
funções até chegar ao ponto de parada, onde ela voltaria novamente
para retornar o valor a instancia primária:

#include<stdio.h>
int somar(int valor) {
    if(valor == 0) {
        //critério de parada
        return valor;
    } else {
        //chamada recursiva
        return valor + somar(valor - 1); 
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um número inteiro positivo : ");
    scanf("%d", &n);
    resultado = somar(n); // primeira chamada da função
    printf("\nResultado = %d",resultado);
    return 0;
}

Perceba que o retorno da primeira instância é 2+?, pois ainda não se conhece o reultado 
da função. Na segunda instancia, ela chama novamente a si mesma, retornando o valor - 1.
Veja que o retorno fica 1+?, pois ainda não se conhece o resultado da função. Na terceira
instância, o critério de parada é satisfeito, retornando zero. esse valor será usado pela
instância anterior, que após soma 1+0, somara 2+1, retornando o valor para a função 
principal, fechando assim o ciclo de recursividade.

				-----------------			   -------
				|				| 			  |		 |		
			instancia 1			|>	instancia 1 	 |>	instancia 3
main  <|    Somar(2)				Somar(1)			somar(0)
	  ------Return 2+?;	  <|		return 1+?;	 <|		return 0;			
							------------|		  -------|
							
A recursividade pode sim ser subistituida por for e visse e verssa, mas as funções 
recursivas podem acabar consumindo mais memória, que as estruturas iterativas (repetições).

Podemos usar resolver um fatorual qualquer N que consiste em multiplicações sucessivas
até que Nseja igual ao valor unitário, ou seja, que resulta 120.


#include<stdio.h>
int fatorial(int valor) {
    if(valor != 1) { 
        //chamada recursiva
        return valor * fatorial(valor - 1); 
    } else {
        //critério de parada
        return valor;
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("\nResultado = %d", resultado);
    return 0;
}

-Recursividade em cauda

Ess mecanismo é custoso ao computador, pois tem que alocar recursos para as vairiaveis e
comandos da função. O procedimento é chamado de empilhamento, além de ter que armazenar
o local onde foi feita, a chamada da função. Para usar a memória de forma mais otimizada,
existe uma alternativa chamada recursividade em cauda. Esse tipo de recursividade funcionará
como uma função iterativa (for, while, etc.)

Chamar a si mesmo em recursividade em cauda é a ultima operação executada dentro de seu
corpo. O caso base normalmente costuma a ser passado como parâmetro, o que resultarpa em 
comportamento diferente.

Para entender, vamps implementar o calculo do fatorial usando essa técnica:

Ela passa o critério da parada e o que precisa ser calculado junto. para tal, é
criado uma função auxiliar para tal:

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
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorialCauda(n);
    printf("\nResultado do fatorial = %d", resultado);
    return 0;
}
*/

