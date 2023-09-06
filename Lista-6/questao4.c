#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[8];
	int i,x,y, soma;
	
	for(i=-1; i<7;i++){
		printf("Digite o %d valor:", i+2);
		scanf("%d", &vetor[i+1]);
	}
	printf("DIgite um valor para X:");
	scanf("%d", &x);
	printf("DIgite um valor para y:");
	scanf("%d", &y);
	
	soma = vetor[x]+vetor[y];
	
	printf("A soma dos vetores correspondentes aos numeros que voce colocou: %d", soma);
	
	
	return 0;
}
