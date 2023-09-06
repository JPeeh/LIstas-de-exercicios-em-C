#include <stdio.h>

int main()
{
    int mat[4][4] = {{45,32,83,95}, {26,14,37,42},{40,43,65,77},{74,79,48,55}};
    int x,y;
    float media;
    int soma1, soma2;
    
    for(x=0; x<4;x++){
    for(y=0;y<4;y++)
    printf("\t%d", mat[x][y]);
    printf("\n\n");
    };
    
    soma1= mat[2][1]+mat[2][2]+mat[2][3]+mat[2][4];
    soma2= mat[3][0]+mat[3][1]+mat[3][2]+mat[3][3];
    
    if(soma1>soma2){
        printf("A maior linha e a 1");
        else
        printf("A maior linha e a 3");
    }
    
}
