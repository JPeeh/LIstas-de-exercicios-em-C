#include <stdio.h>

int main()
{
  int numero, total;
  
  while(total<30){
      printf("inicio total = %d\n", total);
      printf("Entre om um numero:");
      scanf("%d", &numero);
      total+=numero;
  }
  printf("Final total: %d", total);
  
    return 0;
}
