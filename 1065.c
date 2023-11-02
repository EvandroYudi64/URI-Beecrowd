#include <stdio.h>
 
int main() 
{
  int cont=0 , i , x[5];
  for(i=0;i<5;i++)
  {
      scanf("%d" , &x[i]);
      if(x[i]%2==0)
      {
          cont++;
      }
  }
  printf("%d valores pares\n", cont);
    return 0;
}
