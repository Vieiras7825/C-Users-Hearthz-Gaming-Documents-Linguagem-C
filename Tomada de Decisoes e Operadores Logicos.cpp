#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i = 10;
	
	// printf("\n\t%i\n", i!=1);
	// printf("\n\t%i\n", !(i!=1) );
	printf("%i", &i);
	
	if(i==5)
	{
		printf("A expressao e:\n ");
		printf("TRUE");
	}else{
		printf("A expressao e:\n");
		scanf("FALSE");
	}
	
	// ! � um sinal de nega��o, igual a express�o NOT 
	/*
	
	1) positivo -> valor 1
	2) negativa -> valor 0
	 
	*/
	
	// == compara��o positiva -> x == y
	// != compra��o negativa -> x != y
	return 0;
}
