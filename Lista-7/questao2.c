#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	int vetor[6];
	
	for (x=0; x<6;x++){
		printf("Digite o %d ° valor inteiro:", x+1);
		scanf("%d", &vetor[x]);
	}
	for (x=0; x<6;x++){
		printf("Valor [%d] = %d\n", x+1, vetor[x]);
	}
	return 0;
}
