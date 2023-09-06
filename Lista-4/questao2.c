int main()
{
    int mat[4][4] = {{45,32,83,95}, {26,14,37,42},{40,43,65,77},{74,79,48,55}};
    int x,y;
    float media;
    int soma;
    
    for(x=0; x<4;x++){
    for(y=0;y<4;y++)
    printf("\t%d", mat[x][y]);
    printf("\n\n");
    };
    
    soma=mat[2][0]+mat[2][1]+mat[2][2]+mat[2][3];
    
    printf("A soma os valores da linha 3 e: %d",soma );
    
    
}
