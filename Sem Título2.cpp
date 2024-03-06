// as linhas abaixo "chamam" as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	//a linha abaixo configura o idioma para português
	setlocale(LC_ALL, "Portuguese");
	//a linha abaixo muda a cor do texto
	system("color 5E");
	printf("\n Olá Mundo \n");
	system("PAUSE");
	system("cls");
	system("color F0")
	printf("Sabrina Vieira\n");
	system("pause");
    return 0;  
}
