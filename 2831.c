#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int v[n+1];
    int i=0,flag=0;
    for(i=1;i<n+1;i++)
    {
        scanf("%d", &v[i]);

    }
    v[0]=0;//caixa vazia
    for(i=1;i<n+1;i++)
    {
        if((v[i]-v[i-1])>8)
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }

    return 0;
}
