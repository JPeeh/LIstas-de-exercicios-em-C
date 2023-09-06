
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{    
setlocale(LC_ALL, "Portuguese");
double n1,n2,n3;

printf("Digite o primeiro numero:");
scanf("%lf", &n1);
printf("Digite o segundo numero:");
scanf("%lf", &n2);
printf("Digite o terceiro numero:");
scanf("%lf", &n3);

if (n1>n2&&n2>n3){
    printf("o maior numero é: \n%lf", n1);
    printf("\no menor numero é: \n%lf", n3);
}else

if (n1>n3&&n3>n2){
    printf("o maior numero é: \n%lf", n1);
    printf("\no menor numero é: \n%lf", n2);
}else

if (n2>n1&&n1>n3){
    printf("o maior numero é: \n%lf", n2);
    printf("\no menor numero é: \n%lf", n3);
}else

if (n2>n3&&n3>n1){
    printf("o maior numero é: \n%lf", n2);
    printf("\no menor numero é: \n%lf", n1);
}else

if (n3>n1&&n1>n2){
    printf("o maior numero é: \n%lf", n3);
    printf("\no menor numero é: \n%lf", n2);
}else

if (n3>n2&&n2>n1){
    printf("o maior numero é: \n%lf", n3);
    printf("\no menor numero é: \n%lf", n1);
}else

if (n1==n2||n2==n3||n1==n3){
    printf("Numeros iguais.");
    

}
}
