#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
   float x, y;


   printf("Digite as coordenadas (x,y) do ponto: ");
   scanf("%f %f", &x, &y);


   if (x == 0 && y == 0) {
      printf("Origem\n");
   }
   else if (x == 0) {
      printf("Eixo Y\n");
   }
   else if (y == 0) {
      printf("Eixo X\n");
   }
   else if (x > 0 && y > 0) {
      printf("Quadrante 1\n");
   }
   else if (x < 0 && y > 0) {
      printf("Quadrante 2\n");
   }
   else if (x < 0 && y < 0) {
      printf("Quadrante 3\n");
   }
   else if (x > 0 && y < 0) {
      printf("Quadrante 4\n");
   }

   return 0;
}
