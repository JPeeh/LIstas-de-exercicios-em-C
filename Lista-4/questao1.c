
#include <stdio.h>

int main()
{
    int mat[4][4] = {{45,32,83,95}, {26,14,37,42},{40,43,65,77},{74,79,48,55}};
    int x,y;
    float media;
    int soma=0;
    
    for(x=0; x<4;x++){
    for(y=0;y<4;y++)
    printf("\t%d", mat[x][y]);
    printf("\n\n");
    };
    
    for(x=0; x<4;x++){
    for(y=0;y<4;y++)
    soma+=mat[x][y];
    media= soma/16;
    }   
    
    printf("\n\nA media aritmetica de todos os numeros e: %f", media);
    
    
}
