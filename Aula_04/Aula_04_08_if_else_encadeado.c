/*Neste caso, trabalhamos com ifs e elses dentro de ifs e elses, onde se uma condicional for verdadeira, voc� ir� executar outras condicionais e assim
por diante:

exemplo de sintaxe:

if (condi��o) {

   instru��o;

} else {

   if (condi��o) {

      instru��o;

   } else(condi��o) {

      instru��o;

   }

}
*/

#include <stdio.h>
int main(){
    float nota_final;
    printf("\n Informe a nota final do aluno: ");
    scanf("%f", &nota_final);
    
    if (nota_final >= 60) 
	{
        printf("\n Aprovado");
    } 
	else 
	{
        if (nota_final >= 50) 
		{
            printf("\n Em recupera��o");
        } 
		else 
		{
            printf("\n Reprovado");
        }
    }
    return 0;
}
