#include<stdio.h>
#include <locale.h>
 
void testar(int* n1, int* n2){
    *n1 = 1; 
    *n2 = 2;
    printf("\n\nValores dentro da fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", *n1, *n2);
}
 
int main(){
	setlocale(LC_ALL, "");
    int n3 = 10;
    int n4 = 20;
    printf("\nValores antes de chamar a fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", n3, n4);
 
    testar(&n3, &n4);
 
    printf("\n\nValores depois de chamar a fun��o testar(): ");
    printf("\nn1 = %d e n2 = %d", n3, n4);
 
    return 0;
}
