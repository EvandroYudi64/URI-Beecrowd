#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main() 
{
    int n, eN = 0, oN = 0;
    scanf("%d", &n);
    int v[n];
    int i;

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) 
        {
            eN++;
        } 
        else 
        {
            oN++;
        }
    }

    qsort(v, n, sizeof(int), comparador);
    int eV[eN], oV[oN];
    int eI = 0, oI = 0;

    for (i = 0; i < n; i++) 
    {
        if (v[i] % 2 == 0) 
        {
            eV[eI] = v[i];
            eI++;
        } 
        else 
        {
            oV[oI] = v[i];
            oI++;
        }
    }

    for (i = 0; i < eN; i++) 
    {
        printf("%d\n", eV[i]);
    }

    for (i = oN - 1; i >= 0; i--) 
    {
        printf("%d\n", oV[i]);
    }

    return 0;
}
