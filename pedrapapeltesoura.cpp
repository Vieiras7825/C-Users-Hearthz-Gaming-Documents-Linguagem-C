#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
   Jogo Pedra Papel Tesoura
   @author: Sabrina Vieira
*/

int main(int argc, char *argv[])
{
	//declarando vari�veis de apoio a l�gica
	int jogador, computador;
	//l�gica do jogador
	printf("_____________JoKenPo_____________\n\n");
	printf("1. PEDRA\n");
	printf("2. PAPEL\n");
	printf("3. TESOURA\n");
	printf("Digite a a op��o desejada: ");
	scanf("%d", &jogador);
	printf("\n_______________________________\n\n");
	switch(jogador)
	{
		case 1:
			printf("Jogador escolheu PEDRA\n");
			break;
		case 2:
			printf("Jogador escolheu PAPEL\n");
			break;
		case 3:
			printf("Jogador escolheu TESOURA\n");
			break;
			
			default:
			printf("Opcao invalida\n");		
   }
   // l�gica do computador
   srand(time(NULL));
   computador= rand() %3 + 1; //esta linha atribui um n�mero
   switch(computador)
   {
		case 1:
			printf("Computador escolheu PEDRA\n");
			break;
		case 2:
			printf("Computador escolheu PAPEL\n");
			break;
		case 3:
			printf("Computador escolheu TESOURA\n");
			break;
	}
	//l�gica para determinar o vencedor
	if(jogador==computador)
	{
	    printf("EMPATE\n");	
	}
	else if ((jogador==1 && computador ==3) || (jogador==2 && computador) || (jogador==3 && computador==2))
	{
		printf("JOGADOR VENCEU\n");
	}
	else
	{
		printf("COMPUTADOR VENCEU\n");
	}
	printf("________________________________\n");
	system("PAUSE");
	return 0;
}
