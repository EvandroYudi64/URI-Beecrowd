#include <stdio.h>

int main() {
    int idade1=0,idade2=0,idademae=0, idade3=0,aux=0;
    scanf("%d%d%d", &idademae, &idade1,&idade2);
    int soma,dif;
    soma=idade1+idade2;
    idade3=idademae-soma;
    int v[3]={idade1,idade2,idade3},i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    printf("%d\n", v[0]);

    return 0;
}
