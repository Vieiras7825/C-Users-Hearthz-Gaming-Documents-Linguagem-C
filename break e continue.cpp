#include <stdio.h>
#include <stdlib.h>

int main()
{
	//break    -> simplesmente interrompe o nosso ciclo
	//continue -> interrompe o nosso laço
	
	for(int x = 0; x <= 10; ++x) 
	
	{
		//quando x == 20, interrompa somente o laço atual
	   	if(x == 2) 
	   	{
	   		printf("-\n", x);
	   	    continue;	
		}
		
		printf("-\n", x);
		
		if(x == 8) //quando nós chegamos a 80 o looping será finalizando
		{
			printf("-\n", x);
			break;
		}
		
		printf("%i\n", x);
	}
	
	return 0;
}
