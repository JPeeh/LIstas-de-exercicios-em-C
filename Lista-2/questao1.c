#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{    
setlocale(LC_ALL, "Portuguese");
int DDD;
printf("Digite o DDD de uma cidade que informarei qual cidade �.");
scanf("%d",&DDD);

switch(DDD){
    case 61:
    printf("A cidade �: Brasilia");
    break;
    
    case 71:
    printf("A cidade �: Salvador");
    break;
    
    case 11:
    printf("A cidade �: S�o Paulo");
    break;
    
    case 21:
    printf("A cidade �: Rio de Janeiro");
    break;
    
    case 32:
    printf("A cidade �: Juiz de Fora");
    break;
    
    case 19:
    printf("A cidade �: Campinas");
    break;
    
    case 27:
    printf("A cidade �: Vit�ria");
    break;
    
    case 31:
    printf("A cidade �: Belo Horizonte");
    break;
    
    default:
    printf("Esse DDD n�o corresponde a nenhuma cidade.");
    
} 
}


