/*
Funções e estruturação

A função "int main(){}" em sua estrutura siginifcaria uma função do
tipo int, sendo ela a principal e irá retornar um valor inteiro,
nesse caso 0.

#include <stdio.h>
int main()
{
	printf("Hello World!");
	return 0;
}

O conceito de dividir e conquistar também é aplicado na programação.

-Dividir: quebrar um problema em outros subproblemas menores. 
“Solucionar pequenos problemas, em vez de um grande problema, 
e´, do ponto de vista computacional, supostamente mais fácil”.

-Conquistar: usar uma sequência de instruções separada, para resolver 
cada subproblema.

-Combinar: juntar a solução de cada subproblema para alcançar a solução 
completa do problema original.

funções são básicamente blocos escritos tanto para dividir a complexidade
de um problema maior quanto para evitar a repetição de códigos, podendo
reutiliza-lo. Podemos chamar isso de MODULARIZAÇÃO

A sintaxe para cria funções em C seria:

<tipo, seja inteiro, char, etc.> <nome> (<parâmetros>){
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

Perceba que a função irá retornar um valor inteiro devido ao tipo
definido inicialmente.

Logo, se eu trabalha-se com valores decimais, ela iria apenas
ignorar o valor decimal do número e pegar o valor inteiro
resultante da mesma.

Perceba que poderiamos escrever essa solução de formas diferentes
como mostrado abaixo

int somar(){
 int x = 0;
 x = 2 + 3;
 return x;
}

mas nesse caso, escrevemos mais linhas de código, gerando mais espaço 
alocado na memória.

Iremos agora trabalhar no exemplo 2:

#include<stdio.h>
 
float calcular() {
    float num;
    printf("\nDigite um número: ");
    scanf("%f", &num);
    return num * num;
}
 
int main(){
    float resultado = 0;
    resultado = calcular();
    printf("\nO quadrado do número digitado é %.2f ", resultado);
    return 0;
} 

Nesse exemplo, podemos ver que podemos pular a ordem do código escrito
ao invocar as funções dentro da main function, possibilitando 
reutilização da mesma sem precisar reescreve-la várias vezes.

===Funções com Ponteiro na linguagem C===

Dentro da linguagem C, não conseguimos retornar vetores com estruturas
como int[10] calcular(), indicando as 10 posições na memória utlizada.
Para isso usamos ponteiros.

Ponteiros são variaveis que armazenam um endereço de memória,um rótulo,
possibilitando a função que invocou a função a utilizar os valores
armazenados nos vetores endereçados pelos ponteiros.

Veja o exemplo 3 abaixo: 
*/
