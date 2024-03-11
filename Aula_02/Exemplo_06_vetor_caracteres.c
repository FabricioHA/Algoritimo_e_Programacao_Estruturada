/*
Vetor de caracteres (STRING)

caracteres são um tipo primitivo de dados, lembrando que palavras são formadas por uma
cadeia de caracteres.

Levando em conta essa cadeia de caracteres, podemos presupor que palavras são vetores
também. em programação, essa cadeia/vetor de caracteres é chamado de STRING.

Em c, não temos uma variavel para string, então para declararmos uma, precisamos
criar a partir do tipo char:

char <nome_da_string>[tamanho]

exemplos:

char nome[16];
char sobrenome[31];
char frase[101];

É bom nos atentarmos também ao tamanho da string. quando declaramos uma variavel de 16
blocos, apenas 15 de fato serão utilizados, pois o ultimo bloco é reservado ao
compilador que atribui o valor "\0", determinando o final da sequencia de caracteres.

Podemos declarar strings de duas formas distintas, sendo a primeira entre chaves
separando caractere por caractere em virgula ou atribuindo uma palavra ou frase em
aspas duplas

char nome[16]={'J','o','a','o'};
char sobrenome[31] = "Alberto Gomes";

a função scanf serve bem para imprimir os valores individualmente, mas por definição,
o scanf irá ler uma variavel até encontrar um space in white (espaço) dentro do texto

Também poderiamos utilizar a função gets() que lerá todo o input até encrontrar um 
newline ou o fim do arquivo, considerando espaços como parte da string.

No entanto, os dois não são ideais por não terem um buffer de proteção contra overflow:

Nota: Buffer overflow é referente a um ataque hacker contra vulnerabilidades do 
programa (como scanf ou gets), tentando armazenar mais dados do que ele foi
projetado para conter, permitindo a execução de um código malicioso ou corrompimento
de dados importantes no sistema afetado.

a melhor opção é o fgets(), também do <stdio.h>, contendo a seguinte sintaxe:

fgets(destino, tamanho, fluxo);

Destino: é referente ao nome da string;
Tamanho: deve ser o mesmo declarado na variavel;
Fluxo: Indica o tipo de entrada da string (normalmente do teclado), referente ao
parametro stdin (standard input);

Exemplo:
*/

#include <stdio.h>

int main()
{
	char frase[10];
	
	printf("\n Digite uma frase:");
	fflush(stdin);
	fgets(frase, 10, stdin);
	
	printf("\n Frase digitada: %s", frase);
}
