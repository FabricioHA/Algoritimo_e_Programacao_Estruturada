#include <stdio.h> //Exportar printf()
#include <stdlib.h> //Inportar scanf()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h> //Exportar getch() e getche()
#include <windows.h> //Exportar comandos do windows
#include <stdbool.h> //Exportar bibliotecas booleanas no C

int main(void)
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //Maximizar tela do tela do console windows
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	
	system("cls");//Limpar tela
	system("title Aula 02 - Exercício 01");
	system("color 0A");
	system("cls");
	
	int idade = 23;
	float salario = 1250.75;
	
	printf("Sua idade é %i e seu salário é %.2f\n\n", idade, salario);
	
	system("PAUSE");
	return 0;
}
