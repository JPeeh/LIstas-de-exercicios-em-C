#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{    
setlocale(LC_ALL, "Portuguese");
double n1,n2,n3,n4,media;
printf("Digite a primeira nota: \n");
scanf("%lf", &n1);
printf("Digite a segunda nota: \n");
scanf("%lf", &n2);
printf("Digite a terceira nota: \n");
scanf("%lf", &n3);
printf("Digite a quarta nota: \n");
scanf("%lf", &n4);

    media=((n1+n2+n3+n4)/4);
    
    
        if (media>0&&media<=3){
            printf("Reprovado com a media: %lf", media);
        }else
        
        if (media>=3.1&&media<=6.9){
            printf("Recuperação com a media: %lf", media);
        }else
        
        if (media>6.9){
            printf("Aprovado com a media: %lf", media);
        }
        }
