#include <stdio.h>

int main() {

   int n, i, j,v[50],cont=0;
   scanf("%d", &n);
   for(i=0;i<n;i++)
        scanf("%d", &v[i]);

   for(i=0;i<n;i++)
   {
       if(i==0)
       {
           cont = v[i]+v[i+1];
       }
       else if(i==n-1)
       {
           cont = v[i]+v[i-1];
       }
       else
       {
           cont = v[i]+v[i-1]+v[i+1];
       }
       printf("%d\n", cont);
   }

    return 0;
}

