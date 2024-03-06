#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	
	1) soma -> +=
	2) subtração -> -=
	3) multiplicação -> *=
	4) divisão -> /=
	5) resto (módulo) -> %=
	
	*/
	
	int i = 1;
	printf( "%i\n", i );
	printf( "%i\n", ++i );
	i++;
	printf( "%i\n", i++ );
	
	return 0;
}
