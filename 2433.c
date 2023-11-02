#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int comparador(const void *a, const void *b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,k;
    scanf("%d%d", &n,&k);
    int v[n];
    int i=0;
    while(i<n)
    {
        scanf("%d", &v[i]);
        i++;
    }
    qsort(v,n,sizeof(int),comparador);
    int aux=n-k-1;
    int menor=v[aux]-v[0];
    for(i=0;i<k+1;i++,aux++)
    {
        if((v[aux]-v[i])<menor)
        {
            menor=v[aux]-v[i];
        }
    }
    printf("%d\n", menor);
    return 0;
}
