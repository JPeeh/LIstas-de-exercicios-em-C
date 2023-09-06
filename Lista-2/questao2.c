#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{    
setlocale(LC_ALL, "Portuguese");
double salario,VP;

printf("Digite o seu salario:");
scanf("%lf", &salario);

printf("Digite o valor da prestação do emprestimo:");
scanf("%lf", &VP);

if (VP>salario*20/100){
    printf("Emprestimo não concedido.");
}else
printf("Emprestimo concedido.");

}
