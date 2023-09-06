#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {    
        
       double n1,n2,n3,n4, media;
       
       printf("Digite a nota 1:");
       scanf("%lf", &n1);
       printf("Digite a nota 2:");
       scanf("%lf", &n2);
       printf("Digite a nota 3:");
       scanf("%lf", &n3);
       printf("Digite a nota 4:");
       scanf("%lf", &n4);
       
       media=(n1+n2+n3+n4)/4;
       
       printf("A media das notas e:\n %lf", media);
               
        
        

    
    return 0;
}
