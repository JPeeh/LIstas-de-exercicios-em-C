#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {    
        
        double raio, area;
        
        printf("Qual e o raio do circulo?\n");
        scanf("%lf", &raio);
        
        
        area=(3.14*(raio*raio));
        
        printf("A area do circulo e:\n %lf", area);
           
    return 0;
}
