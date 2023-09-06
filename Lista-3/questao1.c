#include <stdio.h>

int main()
{
  int x,y;
  
  printf("Digite um numero:");
  scanf("%d", &y);
  
  for(x=y; x>=0; x-- ){
     printf("%d\n",x); 
  }
  for(x=0; x<y; x++){
      printf("%d\n", x+1);
  }

    return 0;
}
