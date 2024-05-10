/*Variaveis Globais

Variaveis locais s�o variaveis criadas dentro de um corpo  de fun��o 
no c�digo, j� variaveis globais s�o variaveis gravadas fora de uma
fun��o na mem�ria, podendo ser  utilizada e �inico dentro de todo o
script do c�digo.

Vamos testar o c�digo 3.8 no livro para tal:

#include<stdio.h>
 
int testar(){
    int x = 10;
    return x;
}
int main(){
    int x = 20;
    printf("\n Valor de x na fun��o main() = %d", x);
    printf("\n Valor de x na fun��o testar() = %d", testar());
 
    return 0;
}

Nos dais casos, as vari�veis s�o locais. Para que uma variavel seja 
global, precisamos criar vari�veis fora dos limites de suas respectivas
fun��es:

Mesmo se definirmos duas variaveis com mesmo nome, desde que elas est�o
em "armarios" diferentes na gaveta, podemos criar vari�veis dessa
maneira, uma vez que s� coletamos o retorno de suas fun��es, n�o o
conte�do em s�.

Abaixo, temos um exemplo de vari�vel global:

#include<stdio.h>
 
int x = 10;
 
void testar(){
    x = 2 * x;
}
 
int main(){
    printf("\nValor de x global = %d", x);
    testar();
    printf("\nValor de x global alterado em testar() = %d", x);
 
    return 0;
}

Perceba que podemos usar essas variavais e seus valores em qualquer
ponto ou fun��o do script do c�diggo, abrindo um leque
de possibilidades.

Para conseguirmos  acessar o valor de uma variavel global com mesmo
nome que uma variavel local, para diferenciar, usamos "extern":

Veja o c�digo a frente:

#include<stdio.h>
 
int x = 10;
 
int main(){
  int x = -1;
  int b;
  {
    extern int x;
    b = x;
  }
  printf("\n Valor de x = %d",x);
  printf("\n Valor de b (x global) = %d",b);
  return 0;
}

				Passagem de parametros das fun��es
				
fun��es temos a seguinte sintaxe:

<tipo de retorno> <nome> (<par�metros>) {
   <Comandos da fun��o>
   <Retorno> (n�o obrigat�rio)
}

-Passagem por valor:

Na sintaxe, para criar uma fun��o que recebe par�metros,
� preciso especificarqual o tipo de valor que ser� recebido.

podemos definir quais e quantos par�metros ser�o passados dentro
dessa fun��o, por exemplo a fun��o "somar" tem que ter no minimo
dois par�metros distintos para retornar um valor, como faremos a 
seguir:

#include<stdio.h>
int somar(int a, int b){
    return a + b;
}
 
int main(){
    int result;
    result = somar(10, 15);
    printf("\nResultado da soma = %d", result);
 
    return 0;
}

Perceba que apesar de haver mudan�as de valores dentro da fun��o,
ela s� � aplicavel localmente, pois o valor original atribuido 
na fun��o se manter� inalterado, pois apenas pegamos uma c�pia 
dos valores que elas nos retornam, n�o a fun��o em s�:

#include<stdio.h>
 
void testar(int n1, int n2){
    n1 = -1;
    n2 = -2;
    printf("\n\nValores dentro da fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);
}
 
int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);
 
    testar(n1, n2);
 
    printf("\n\nValores depois de chamar a fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);
 
    return 0;

-Passagem por Refer�ncia
Passagem de referenia est� diretamente ligada a conceitos de 
ponteiro e endere�o de mem�ria.

Basicamente, iremos chamar a fun��o externa e apontar aonde seus 
valores ser�o armazenados localmente dentro da mem�ria,
onde em vez de passar o resultado e fazer uma c�pia da mesma,
podemos especificar apenas o tipo que precisa ser armazenado sem
especificar exatamente o seu r�tulo, definindo-o em um outro ponto
com os operadores * nos paramtros de defini��o de fun��o, e & para
endere�ar exatamente aonde esse valor ser� armazenado, como se fosse
um scanf()

#include<stdio.h>
 
void testar(int* n1, int* n2){
    *n1 = -1; 
    *n2 = -2;
    printf("\n\nValores dentro da fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", *n1, *n2);
}
 
int main(){
    int n3 = 10;
    int n4 = 20;
    printf("\nValores antes de chamar a fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", n3, n4);
 
    testar(&n3, &n4);
 
    printf("\n\nValores depois de chamar a fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", n3, n4);
 
    return 0;
}

-Passagem de vetores

A passagem de parametros de vetores � um pouco mais complexo.
Esse recurso pode ser utilizado para criar fun��es que preenchem e 
imprimem o conte�do armazenaado em um vetor, evitando a repeti�ao de
trechos de c�digo.

Os paramentros devem ser declarados com colchetes sem especificar
seu tamanho, por exemplo:
int testar(int v1[], int v2[]);

Ao chamar a fun��o, devemos inserir os parametros como se fossem
variaveis simples:
resultado = testar(n1,n2);

Na linguagem C, quando uma fun��o com vetor � invocada, o que �
passado 

#include<stdio.h>
void inserir(int a[]) {
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\nDigite o valor %d: ", i);
        scanf("%d", &a[i]);
    }
}
 
void imprimir(int b[]) {
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\nN�mero[%d] = %d", i, 2 * b[i]);
    }
}
 
int main(){
    int numeros[3];
    printf("\nPreenchendo o vetor... \n ");
    inserir(numeros);
    printf("\n\nDobro dos valores informados:");
    imprimir(numeros);
    return 0;
}


				Recursividade
				
Esse conceito utiliza a l�gica de fatorial, onde por exemplo, 5! 
(cinco fatorial), acumula valores menores que cinco e multiplica
gerando u valor total a partir disso:

5! = 5 * 4* 3 * 2 * 1 = 120

Tamb�m sendo igual a algo como multiplica numeros <=5

"'''Basicamente uma fun��o recursiva � aquela que chama e 
referencia a si mesma, como no fatorial"'''

a sintaxe de uma fun��o recursiva � a mesma das padr�es, a
diferen�a est� no corpo:

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
*/
