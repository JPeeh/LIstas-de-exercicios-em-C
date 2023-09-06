#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    
    double mercadoria, frete, despesas, vc,vv, percentual, lucro ;
    
    printf("Digite o valor da mercadoria:\n");
    scanf("%lf", &mercadoria);
    printf("Digite o valor do frete:\n");
    scanf("%lf", &frete);
    printf("DIgite o valor das despesas:\n");
    scanf("%lf", &despesas);
    
    system("cls");
    vc = (mercadoria+frete+despesas);
    printf("O preço de custo do seu produto:\n %lf ", vc );
    
    system("pause");
    
    system("cls");
    
    printf("Digite o valor de venda do seu produto:\n");
    scanf("%lf",&vv );
    
    lucro = (vv-vc);
        
    percentual = (lucro/vc*100);
    
    printf("O percentual do lucro do seu produto é:\n %.2lf%%", percentual);
        
    return 0;
}

