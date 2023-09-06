#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{    
setlocale(LC_ALL, "Portuguese");
int DDD;
printf("Digite o DDD de uma cidade que informarei qual cidade é.");
scanf("%d",&DDD);

switch(DDD){
    case 61:
    printf("A cidade é: Brasilia");
    break;
    
    case 71:
    printf("A cidade é: Salvador");
    break;
    
    case 11:
    printf("A cidade é: São Paulo");
    break;
    
    case 21:
    printf("A cidade é: Rio de Janeiro");
    break;
    
    case 32:
    printf("A cidade é: Juiz de Fora");
    break;
    
    case 19:
    printf("A cidade é: Campinas");
    break;
    
    case 27:
    printf("A cidade é: Vitória");
    break;
    
    case 31:
    printf("A cidade é: Belo Horizonte");
    break;
    
    default:
    printf("Esse DDD não corresponde a nenhuma cidade.");
    
} 
}


