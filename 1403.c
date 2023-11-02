#include <stdio.h>
#include <stdlib.h>
typedef struct colocados{
    int identificador;
    int pontos;
}colocados;

int comparador(const void *x, const void *y) {
    int pri = ((struct colocados *)x)->pontos;
    int seg = ((struct colocados *)y)->pontos;
    return (seg - pri);
}
int comparadorid(const void *x, const void *y) {
    int pri = ((struct colocados *)x)->identificador;
    int seg = ((struct colocados *)y)->identificador;
    return (pri - seg);
}
int main() {

    int n,m, indice;
    scanf("%d%d", &n,&m);
    while(m!=0 && n!=0)
    {
        colocados colocadosp[10000];
        int i;
        int maiorindice = 1;
        for(i=0;i<10000;i++)
        {
            colocadosp[i].identificador=i;
            colocadosp[i].pontos=0;
        }
        for(i=0;i<(m*n);i++)
        {
            scanf("%d", &indice);
            colocadosp[indice].pontos+=1;
            if(indice>maiorindice)
            {
                maiorindice=indice;
            }
        }

        int primeiro;
        qsort(colocadosp,10000,sizeof(struct  colocados),comparador);

        int segundolugar= colocadosp[1].pontos;
        colocados *a;
        a= colocadosp+1;
        qsort(a,10000,sizeof(struct  colocados),comparadorid);
        for(i=0 ; i<=maiorindice;i++)
        {
            if(a[i].pontos==segundolugar)
            {
                printf("%d ", a[i].identificador);
            }
        }
        printf("\n");


        scanf("%d%d", &n,&m);
    }



    return 0;
}
