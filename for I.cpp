#include <stdio.h>
#include <stdlib.h>

int main()
{
	//while(true)
	//do/while(true)
	//for
	
	/*
    for( ; parte; parte) {
		parte1 -> inicializa��o
		
		parte2 -> condi��o
		
		parte3 -> atualiza��o
	}
	*/
	
	for(int a = 0, b = 10; a <= 10 && b >= 0; ++a, --b) 
	{
	    printf("%i", a);
		printf(" - ");
		printf("%i\n", b);	
	}
	
	return 0;
}
