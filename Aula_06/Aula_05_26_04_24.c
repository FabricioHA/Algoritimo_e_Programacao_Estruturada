/*
Fun��es e estrutura��o

A fun��o "int main(){}" em sua estrutura siginifcaria uma fun��o do
tipo int, sendo ela a principal e ir� retornar um valor inteiro,
nesse caso 0.

#include <stdio.h>
int main()
{
	printf("Hello World!");
	return 0;
}

O conceito de dividir e conquistar tamb�m � aplicado na programa��o.

-Dividir: quebrar um problema em outros subproblemas menores. 
�Solucionar pequenos problemas, em vez de um grande problema, 
e�, do ponto de vista computacional, supostamente mais f�cil�.

-Conquistar: usar uma sequ�ncia de instru��es separada, para resolver 
cada subproblema.

-Combinar: juntar a solu��o de cada subproblema para alcan�ar a solu��o 
completa do problema original.

fun��es s�o b�sicamente blocos escritos tanto para dividir a complexidade
de um problema maior quanto para evitar a repeti��o de c�digos, podendo
reutiliza-lo. Podemos chamar isso de MODULARIZA��O

A sintaxe para cria fun��es em C seria:

<tipo, seja inteiro, char, etc.> <nome> (<par�metros>){
	<processos>
	<retorno> o conteudo retornado
}

#include<stdio.h>
int somar(){
    return 2 + 3;
}
int main(){
    int resultado = 0;
    resultado = somar();
    printf("O resultado da funcao e = %d",resultado);
    return 0;
}

Perceba que a fun��o ir� retornar um valor inteiro devido ao tipo
definido inicialmente.

Logo, se eu trabalha-se com valores decimais, ela iria apenas
ignorar o valor decimal do n�mero e pegar o valor inteiro
resultante da mesma.

Perceba que poderiamos escrever essa solu��o de formas diferentes
como mostrado abaixo

int somar(){
 int x = 0;
 x = 2 + 3;
 return x;
}

mas nesse caso, escrevemos mais linhas de c�digo, gerando mais espa�o 
alocado na mem�ria.

Iremos agora trabalhar no exemplo 2:

#include<stdio.h>
 
float calcular() {
    float num;
    printf("\nDigite um n�mero: ");
    scanf("%f", &num);
    return num * num;
}
 
int main(){
    float resultado = 0;
    resultado = calcular();
    printf("\nO quadrado do n�mero digitado � %.2f ", resultado);
    return 0;
} 

Nesse exemplo, podemos ver que podemos pular a ordem do c�digo escrito
ao invocar as fun��es dentro da main function, possibilitando 
reutiliza��o da mesma sem precisar reescreve-la v�rias vezes.

===Fun��es com Ponteiro na linguagem C===

Dentro da linguagem C, n�o conseguimos retornar vetores com estruturas
como int[10] calcular(), indicando as 10 posi��es na mem�ria utlizada.
Para isso usamos ponteiros.

Ponteiros s�o variaveis que armazenam um endere�o de mem�ria,um r�tulo,
possibilitando a fun��o que invocou a fun��o a utilizar os valores
armazenados nos vetores endere�ados pelos ponteiros.

Veja o exemplo 3 abaixo: 
*/
