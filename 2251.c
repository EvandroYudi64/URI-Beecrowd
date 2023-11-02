#include <stdio.h>
int movedisc(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        return (2*movedisc(n-1)+1);
}
int main() {

   int disc,cont=0;
   scanf("%d", &disc);
   while(disc!=0)
   {
       printf("Teste %d\n%d\n\n", cont+1,movedisc(disc));
       cont++;
       scanf("%d", &disc);
   }

    return 0;
}
