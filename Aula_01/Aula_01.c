#include <stdlib.h> //Exportar printf e scanf
#include <stdio.h>//Exportar system
#include <locale.h> //Ajustar caracteres especiais

int main(){
	setlocale(LC_ALL, "");
	system("cls"); //limpar tela
	system("title Aula 01 algoritimo ");
	system("color 0A");
	
	int nota1, nota2, media;
	
	printf("--Calcular média básica--\n\n");
	
	printf("Digite a primeira nota: ");
	scanf("%i", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%i", &nota2);
	
	media = (nota1+nota2)/2;
	
	printf("\n=============================================\n");
	
	if(media>=6 && media <= 10){
		printf("Aluno Aprovado\nNota final: %i\n\n", media);
	}
	else if(media < 5 && media >=0){
		printf("Aluno Reprovado\nNota final: %i\n\n", media);
	}
	else{
		printf("\nValores inválidos. Execute novamente\n\n");
	}
	
	system("pause");
	return 0;
	
}
