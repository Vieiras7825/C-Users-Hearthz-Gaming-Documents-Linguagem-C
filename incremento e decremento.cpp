#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	
	1) soma -> +=
	2) subtra��o -> -=
	3) multiplica��o -> *=
	4) divis�o -> /=
	5) resto (m�dulo) -> %=
	
	*/
	
	int i = 1;
	printf( "%i\n", i );
	printf( "%i\n", ++i );
	i++;
	printf( "%i\n", i++ );
	
	return 0;
}
