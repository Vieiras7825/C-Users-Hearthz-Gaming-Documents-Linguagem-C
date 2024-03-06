#include <stdio.h>
#include <stdlib.h>

int main()
{
	
/*	faça
	{
		
	}
	enquanto( true );
*/
    int contador = 0;
    char c;
    do
	{
		contador += 1;
	  	printf("Digite 0 para sair do looping");
	  	printf("%i quantidade de vezes.\n", contador);
	  	c = getchar();
	}
	// while ( false )
	while(c != '0');
		
	return 0;
}
