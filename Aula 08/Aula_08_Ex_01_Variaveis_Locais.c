#include<stdio.h>
#include <locale.h>//Ajustar caracteres especiais
 
int testar()
{
    int x = 10;
    return x;
}
int main()
{
	setlocale(LC_ALL, "");
    int x = 20;
    printf("\n Valor de x na fun��o main() = %d", x);
    printf("\n Valor de x na fun��o testar() = %d", testar());
 
    return 0;

