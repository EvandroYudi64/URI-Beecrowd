#include <stdio.h>
#include <stdlib.h>
int ordcrescente(int arr[], int n)
{
    int i,ordenado=0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i]<arr[i+1]&& arr[i-1]<arr[i])
        {
            ordenado++;
        }
    }
    return ordenado;
}
int orddcrescente(int arr[], int n)
{
    int i,ordenado=0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]&& arr[i-1]>arr[i])
        {
            ordenado++;
        }
    }
    return ordenado;
}
/* Driver code */
int main()
{
    int v[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d", &v[i]);
    }
    int ordc=ordcrescente(v,5);
    int orddc=orddcrescente(v,5);
    if(ordc ==3  && orddc ==0)
    {
        printf("C\n");
    }
    else if(orddc==3&& ordc ==0)
    {
        printf("D\n");
    }
    else
        printf("N\n");
    return 0;
}
