#include<stdio.h>
#include <locale.h>

/*Fun��o para fazer fatora��o de valores*/
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
	setlocale(LC_ALL, "");
    int n, resultado;
    printf("\nDigite um n�mero inteiro positivo : ");
    scanf("%d", &n);
    resultado = somar(n); // primeira chamada da fun��o
    printf("\nResultado = %d",resultado);
    return 0;
}
