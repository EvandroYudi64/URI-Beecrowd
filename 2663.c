#include <stdio.h>

int main() {

    int n,k;
    scanf("%d%d", &n,&k);
    int compet[n],clas[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d", &compet[i]);
    }
    int inmaior,aux,cont=0, flag=0;
    for(i=0;i<n;i++)
    {
        inmaior=i;
        for(j=(i+1);j<n;j++)
        {
            if(compet[inmaior]<compet[j])
                inmaior=j;
        }
        if(inmaior!=i)
        {
            aux=compet[inmaior];
            compet[inmaior]=compet[i];
            compet[i]=aux;
        }
    }
    for(i=0;i<n;i++)
    {
        cont++;
        if(cont==k)
        {
            for(j=i+1;j<n;j++)
            {
                if(compet[i]!=compet[j])
                {
                    break;
                }
                cont++;
            }
            break;
        }

    }
    printf("%d\n", cont);
    return 0;
}

