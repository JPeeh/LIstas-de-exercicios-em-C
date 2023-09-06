#include <stdio.h>

int main()
{
   int vetor[5];
   int n,x;
   float media;
   for (x=0; x<5; x++){
       printf("Digite a %d° idade :", x+1);
       scanf("%d", &vetor[x]);
   }
   
   media= (vetor [0]+ vetor [1]+ vetor[2]+ vetor[3]+ vetor[4])/5;
   printf("%f\n", media);
   
   for (x=-1; x<4; x++){
       if (vetor[x+1]>18)
       printf("%d\n", vetor[x+1]);
       else;
   }
   

    return 0;
}
