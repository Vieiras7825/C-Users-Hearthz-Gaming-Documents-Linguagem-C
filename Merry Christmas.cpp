#include <stdio.h>
#include <stdlib.h>

/*
Sabrina Vieira
Estudo do la�o for
Desenhando uma �rvore de natal
*/

int i, j, star, tamanho;

int main(int argc, char *argv[]) {
	printf("Feliz Natal!\n");
	printf("Tamanho: ");
	scanf("%d", &tamanho);
    printf("\n");
	//La�o principal que define o tamanho da �rvore
	for (i = 1; i <= tamanho; i++) {
		//la�o que define o espa�amento
		for (j = 1; j <= tamanho - i; j++) {
			printf(" ");
		}
		//la�o que desenha a �rvore
		for (star = 1; star <= i * 2 - 1; star++) {
            printf("*");
        }
		printf("\n");
	}
	
	
	printf("\n");
	
	return 0;
}
