#include <stdio.h>
#include <stdlib.h>

typedef struct Brinquedo
{
    int pontos;
    int tempo;
}Brinquedo;
int memo[6000]={0};
int maximo(Brinquedo brinquedos[],int tempo,int n)
{
    if(tempo<0)
    {
        return -100000;
    }
    else if(memo[tempo]>0)
    {
        return memo[tempo];
    }
    else
    {
        int max=0,pontuacao=0;
        for(int i=0;i<n;i++)
        {
            pontuacao = brinquedos[i].pontos+maximo(brinquedos,tempo-brinquedos[i].tempo,n);
            if(pontuacao>max)
            {
                max=pontuacao;
            }
        }
        if(memo[tempo]==0)
        {
            memo[tempo]=max;
        }
        return max;
    }
}
int main() {

    int n,t,cont=1;
    scanf("%d%d",&n,&t);
    while(n!=0 && t!=0)
    {
        int d,p;
        Brinquedo brinquedos[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&d,&p);
            brinquedos[i].pontos=p;
            brinquedos[i].tempo=d;
        }
        printf("Instancia %d\n",cont);
        printf("%d\n",maximo(brinquedos,t,n));
        printf("\n");
        scanf("%d%d",&n,&t);
        cont++;
        for(int i=0;i<6000;i++)
            memo[i]=0;
    }





    return 0;
}
