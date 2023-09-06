#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
   int numero, i;


   printf("Digite um numero positivo: ");
   scanf("%d", &numero);


   printf("Os divisores do numero %d sao: ", numero);
   for (i = 1; i <= numero; i++) {
      if (numero % i == 0) {
         printf("%d ", i);
      }
   }

   return 0;
}
