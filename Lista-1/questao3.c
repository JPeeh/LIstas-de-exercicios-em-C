#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {    
        
        double alt, larg, area, latas;
        
        printf("Digite a altura da parede, em metros:");
        scanf("%lf", &alt);
        printf("Digite a largura da parece, em metros:");
        scanf("%lf", &larg);
        
        area=(alt*larg);
        
        latas=(area * 300)/2000;
        
        printf("A quantidade de latas de tinta que serão necessarias para pintar a parede vai ser:\n %lf", latas);
        
        
        

    
    return 0;
}
