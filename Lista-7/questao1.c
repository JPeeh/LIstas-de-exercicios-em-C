#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
   int A, B, C, D;
   int diferenca;


   printf("Digite o valor de A: ");
   scanf("%d", &A);
   printf("Digite o valor de B: ");
   scanf("%d", &B);
   printf("Digite o valor de C: ");
   scanf("%d", &C);
   printf("Digite o valor de D: ");
   scanf("%d", &D);


   diferenca = (A * B - C * D);


   printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
   printf("DIFERENCA = %d\n", diferenca);

   return 0;
}
