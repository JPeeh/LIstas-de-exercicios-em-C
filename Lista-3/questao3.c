#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    
    printf("Digite um numero:");
    scanf("%d", &y);
    
    for (x=y ; x>0; x--){
        printf("%d\n", x);
    }

    return 0;
}
