#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4] = {{45,32,83,95}, {26,14,37,42},{40,43,65,77},{74,79,48,55}};
    int x,y;
    float media;
    int mut;
    
    for(x=0; x<4;x++){
    for(y=0;y<4;y++)
    printf("\t%d", mat[x][y]);
    printf("\n\n");
    };
    
    mut=mat[0][1]*mat[0][2]*mat[0][3]*mat[0][4];
    
    printf("A multiplicacao da linha 2 e: %d", mut);
    
}
