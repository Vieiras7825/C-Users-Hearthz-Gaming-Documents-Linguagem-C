#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	switch( expressao ) 
	{ 
	    switch( expressao ) 
		{
	    	case(expressao-cost):
	    		break;
	    	case(true):
	    		break;
	    		default:
	    			//não há necessidade de colocarmos um break;
		}
	*/
	
	printf("Digite um valor entre 0 e 9\n");	
	int i; 
	scanf("%i", &i);
	
	switch(i)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:	
		    printf("\nVoce digitou um numero entre 0 e 5\n");
		    break;
		case 6:
			printf("\nA opcao digitada foi 'seis'\n");
			break;
		case 7:	
		    printf("\nA opcao digitada foi 'sete'\n");
			break;
		case 8:	
			printf("\nA opcao digitada foi 'oito'\n");
			break;
		case 9:
		    printf("\nA opcao digitada foi 'nove'\n");
			break;
		case 45000:		
			printf("\nA opcao digitada foi 45000\n");
			break;
	    default:
	    	//A nossa instrução default será executada
	    	//1) caso nenhum item seja satisfatório
	    	//2)
	    	printf("\nOpcao default.\n");
	}
		
	return 0;
}
