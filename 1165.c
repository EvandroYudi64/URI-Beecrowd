#include <stdio.h>

int main(void) {
  int n ,x , i , cont=0;
  scanf("%d" , &n);
  while(n>0)
  {
      scanf("%d" ,&x);
      for(i=1 ; i<=x ;i++)
      {
          if(x%i==0)
          {
              cont++;
          }
      }
      if(cont==2)
      {
          printf("%d eh primo\n" , x);
      }
      else
        printf("%d nao eh primo\n" , x);

        cont=0;
      n--;
  }
  return 0;
}
