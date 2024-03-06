#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
    Sabrina Vieira
    Curso básico de linguagem C
    Jogo do dado
*/

int main(int argc, char *argv[]) 
{
	printf("Jogo do dado\n");
	srand((unsigned int)time(NULL));
	printf("Face: %d\n", rand() %6 +1);
	system("pause");
	return 0;
}
