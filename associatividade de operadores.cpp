#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	    Associação da esquerda para a direita
	    1) ()
	    2) *, /, %
	    3) +, -
	    4) <, <=, >, >=
	    5) ==, !=
	    
	    == Associação da direita para esquerda ==
	    1) --, ++
	    2) =, +=, -+, *=, /=, %=
	    
	    a = b = (c = 1);
	    
	*/
	
	int a, b, c;
	
	a = (b = (c = 1));
	printf("%i\n", a);
    printf("%i\n", b);
	printf("%i\n", c);	 
	return 0;
}
