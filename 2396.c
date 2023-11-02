#include <stdio.h>

int main() {

    int v[100], carros[100];
    int i,j,k,idmenor,n,m,tempo,tempos,aux;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        tempos=0;
        for(j=0;j<m;j++)
        {
            scanf("%d", &tempo);
            tempos+=tempo;
        }
        v[i]=tempos;
        carros[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        idmenor=i;
        for(j=i+1;j<n;j++)
        {
            if(v[j]<v[idmenor])
            {
                idmenor=j;
            }
        }
        if(idmenor!=i)
        {
            aux=v[idmenor];
            v[idmenor]=v[i];
            v[i]=aux;

            aux = carros[idmenor];
            carros[idmenor]=carros[i];
            carros[i]=aux;
        }
    }
    printf("%d\n%d\n%d\n", carros[0],carros[1], carros[2]);

    return 0;
}
