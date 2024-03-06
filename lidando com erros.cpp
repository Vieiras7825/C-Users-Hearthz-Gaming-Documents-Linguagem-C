#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() 
{
	// imprime cabecalho do nosso jogo
    printf("**************************************");
	printf("\nBem vindo ao nosso jogo de adivinhacao\n");
	printf("**************************************");
	
	int numerosecreto = 42;
	
	int numerodetentativas = 3;
	
	int chute;
	
	for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
	    {
	 
	    printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS); 
		
	    printf("Qual é o seu chute?");
	
        scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
			
	    int acertou = (chute == numerosecreto);
	
	    if(acertou)
	    {
		   printf("Parabéns! Você acertou!\n");
		   printf("Jogue de novo, voce e um bom jogador!\n");
		
		   break;
	    }
	    else
	    {
		   int maior = chute > numerosecreto;
		   if(maior)
		{
			int maior = chute > numerosecreto
		}
	}
}
