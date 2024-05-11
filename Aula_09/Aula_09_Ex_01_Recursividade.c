#include<stdio.h>
#include <locale.h>

/*Função para fazer fatoração de valores*/
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
	setlocale(LC_ALL, "");
    int n, resultado;
    printf("\nDigite um número inteiro positivo : ");
    scanf("%d", &n);
    resultado = somar(n); // primeira chamada da função
    printf("\nResultado = %d",resultado);
    return 0;
}
