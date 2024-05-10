#include<stdio.h>
#include <locale.h>

int somar(int valor) {
    if(valor == 5) {
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
