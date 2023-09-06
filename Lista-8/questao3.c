#include <stdio.h>
#include <locale.h>

#define PI 3.14159 

int main() {
   float raio, volume, area;

 
   printf("Digite o valor do raio: ");
   scanf("%f", &raio);


   volume = (4.0/3) * PI * raio * raio * raio;
   area = 4 * PI * raio * raio;


   printf("A area da superficie da esfera e: %f\n", area);
   printf("O volume da esfera e: %f\n", volume);

   return 0;
}
