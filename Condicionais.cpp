#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade, iJ, iI;
	iJ = 17;
	iI = 60;
	
	printf("Digite a idade de uma pessoa:\n");
	scanf( "%i", &idade );
	
	if(idade <= iJ)
	{
		printf("A idade informada eh de um jovem.");
	}else if (idade >= iI) 
	    {
			printf( "\nA idade informada e de uma pessoa idosa.\n");
		}else{
             	//A meia-idade se caracteriza por qualquer pessoa que tenha
				//menos de 60 anos e mais de 17
				printf("A idade informada e de uma pessoa de meia-idade.");
			}
	
	return 0;
}
