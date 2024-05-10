/*Variaveis Globais

Variaveis locais são variaveis criadas dentro de um corpo  de função 
no código, já variaveis globais são variaveis gravadas fora de uma
função na memória, podendo ser  utilizada e úinico dentro de todo o
script do código.

Vamos testar o código 3.8 no livro para tal:

#include<stdio.h>
 
int testar(){
    int x = 10;
    return x;
}
int main(){
    int x = 20;
    printf("\n Valor de x na função main() = %d", x);
    printf("\n Valor de x na função testar() = %d", testar());
 
    return 0;
}

Nos dais casos, as variáveis são locais. Para que uma variavel seja 
global, precisamos criar variáveis fora dos limites de suas respectivas
funções:

Mesmo se definirmos duas variaveis com mesmo nome, desde que elas estão
em "armarios" diferentes na gaveta, podemos criar variáveis dessa
maneira, uma vez que só coletamos o retorno de suas funções, não o
conteúdo em sí.

Abaixo, temos um exemplo de variável global:

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
ponto ou função do script do códiggo, abrindo um leque
de possibilidades.

Para conseguirmos  acessar o valor de uma variavel global com mesmo
nome que uma variavel local, para diferenciar, usamos "extern":

Veja o código a frente:

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

				Passagem de parametros das funções
				
funções temos a seguinte sintaxe:

<tipo de retorno> <nome> (<parâmetros>) {
   <Comandos da função>
   <Retorno> (não obrigatório)
}

-Passagem por valor:

Na sintaxe, para criar uma função que recebe parâmetros,
é preciso especificarqual o tipo de valor que será recebido.

podemos definir quais e quantos parâmetros serão passados dentro
dessa função, por exemplo a função "somar" tem que ter no minimo
dois parâmetros distintos para retornar um valor, como faremos a 
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

Perceba que apesar de haver mudanças de valores dentro da função,
ela só é aplicavel localmente, pois o valor original atribuido 
na função se manterá inalterado, pois apenas pegamos uma cópia 
dos valores que elas nos retornam, não a função em sí:

#include<stdio.h>
 
void testar(int n1, int n2){
    n1 = -1;
    n2 = -2;
    printf("\n\nValores dentro da função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);
}
 
int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);
 
    testar(n1, n2);
 
    printf("\n\nValores depois de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2);
 
    return 0;

-Passagem por Referência
Passagem de referenia está diretamente ligada a conceitos de 
ponteiro e endereço de memória.

Basicamente, iremos chamar a função externa e apontar aonde seus 
valores serão armazenados localmente dentro da memória,
onde em vez de passar o resultado e fazer uma cópia da mesma,
podemos especificar apenas o tipo que precisa ser armazenado sem
especificar exatamente o seu rótulo, definindo-o em um outro ponto
com os operadores * nos paramtros de definição de função, e & para
endereçar exatamente aonde esse valor será armazenado, como se fosse
um scanf()

#include<stdio.h>
 
void testar(int* n1, int* n2){
    *n1 = -1; 
    *n2 = -2;
    printf("\n\nValores dentro da função testar(): ");
    printf("\nn1 = %d e n2 = %d", *n1, *n2);
}
 
int main(){
    int n3 = 10;
    int n4 = 20;
    printf("\nValores antes de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n3, n4);
 
    testar(&n3, &n4);
 
    printf("\n\nValores depois de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n3, n4);
 
    return 0;
}

-Passagem de vetores

A passagem de parametros de vetores é um pouco mais complexo.
Esse recurso pode ser utilizado para criar funções que preenchem e 
imprimem o conteúdo armazenaado em um vetor, evitando a repetiçao de
trechos de código.

Os paramentros devem ser declarados com colchetes sem especificar
seu tamanho, por exemplo:
int testar(int v1[], int v2[]);

Ao chamar a função, devemos inserir os parametros como se fossem
variaveis simples:
resultado = testar(n1,n2);

Na linguagem C, quando uma função com vetor é invocada, o que é
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
        printf("\nNúmero[%d] = %d", i, 2 * b[i]);
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
				
Esse conceito utiliza a lógica de fatorial, onde por exemplo, 5! 
(cinco fatorial), acumula valores menores que cinco e multiplica
gerando u valor total a partir disso:

5! = 5 * 4* 3 * 2 * 1 = 120

Também sendo igual a algo como multiplica numeros <=5

"'''Basicamente uma função recursiva é aquela que chama e 
referencia a si mesma, como no fatorial"'''

a sintaxe de uma função recursiva é a mesma das padrões, a
diferença está no corpo:

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
*/
