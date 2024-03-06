#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    int num1, num2, soma, subtracao, multi, div;
    
    printf("Calculadora 1.0");
    printf("Entre os 2 numeros a serem processados.");
    scanf("%i%i", &num1, &num2);
    
    
    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    
    if (num2 != 0) {
    	div = num1 / num2;
    	printf("A divisao e: %i\n", div);
	} else {
		printf("Nao e possivel dividir por zero.\n");
	}
    
    printf("A soma e: \n", soma);
    printf("A subtracao e: %i\n", subtracao);
    printf("O produto e: %i\n", multi);
    printf("A divisao e: %i\n", div);
    
    return 0;   

}


