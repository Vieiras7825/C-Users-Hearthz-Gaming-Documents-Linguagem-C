#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Sabrina Vieira 
   Curso b�sico de linguagem C
   Jogo do dado
*/

int main(int argc, char * argv[]) {
	printf("Jogo do dado\n");
	srand(time(NULL));
	printf("Face: %d\n", rand()%6);
	system("pause");
	return 0;
}
