/*
Vetor de caracteres (STRING)

caracteres s�o um tipo primitivo de dados, lembrando que palavras s�o formadas por uma
cadeia de caracteres.

Levando em conta essa cadeia de caracteres, podemos presupor que palavras s�o vetores
tamb�m. em programa��o, essa cadeia/vetor de caracteres � chamado de STRING.

Em c, n�o temos uma variavel para string, ent�o para declararmos uma, precisamos
criar a partir do tipo char:

char <nome_da_string>[tamanho]

exemplos:

char nome[16];
char sobrenome[31];
char frase[101];

� bom nos atentarmos tamb�m ao tamanho da string. quando declaramos uma variavel de 16
blocos, apenas 15 de fato ser�o utilizados, pois o ultimo bloco � reservado ao
compilador que atribui o valor "\0", determinando o final da sequencia de caracteres.

Podemos declarar strings de duas formas distintas, sendo a primeira entre chaves
separando caractere por caractere em virgula ou atribuindo uma palavra ou frase em
aspas duplas

char nome[16]={'J','o','a','o'};
char sobrenome[31] = "Alberto Gomes";

a fun��o scanf serve bem para imprimir os valores individualmente, mas por defini��o,
o scanf ir� ler uma variavel at� encontrar um space in white (espa�o) dentro do texto

Tamb�m poderiamos utilizar a fun��o gets() que ler� todo o input at� encrontrar um 
newline ou o fim do arquivo, considerando espa�os como parte da string.

No entanto, os dois n�o s�o ideais por n�o terem um buffer de prote��o contra overflow:

Nota: Buffer overflow � referente a um ataque hacker contra vulnerabilidades do 
programa (como scanf ou gets), tentando armazenar mais dados do que ele foi
projetado para conter, permitindo a execu��o de um c�digo malicioso ou corrompimento
de dados importantes no sistema afetado.

a melhor op��o � o fgets(), tamb�m do <stdio.h>, contendo a seguinte sintaxe:

fgets(destino, tamanho, fluxo);

Destino: � referente ao nome da string;
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
