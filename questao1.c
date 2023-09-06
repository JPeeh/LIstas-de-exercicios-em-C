#include <stdio.h>
#include <stdlib.h>

int main (){
	int A[6]= {1,0,5,-2,-5,7};
	int soma,x;
	
	soma = (A[0]+A[1]+A[5]);
	
	printf("A soma dos valores 0, 1 e 5 é: \n%d\n", soma);
	
	A[4]= (100);
	
	for(x-1 ; x<5 ; x++){
		printf("\n Vetor[%d] = %d\n", x+1, A[x+1]);
		
	}
}
