#include <stdio.h>
#include <stdlib.h>

int main()
{
	//&&
	//(true)&&(true)
	
	int i = 40;
	int condicao =  ( (i > 20) && (i<100) );
	
	printf("%i", condicao )
	printf("%i", !condicao )	
	//||
	//(true)||(false)     -> 1
	//(false)||(true)     -> 1
	//(true)||(true)      -> 1
	//(true)||(true)      -> 1	
	return 0;
}
