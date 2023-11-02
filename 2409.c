#include <stdio.h>
int testa(int x,int y,int l,int h)
{
    if(x<=l && y<=h)
    {
        return 1;
    }
    else
        return 0;
}
int main() {

    int a,b,c;
    int h,l;
    int cont=0;
    scanf("%d%d%d", &a,&b,&c);scanf("%d%d", &h,&l);
    //teste 1
    cont+=testa(a,c,l,h);
    //teste 2
    cont+=testa(a,b,l,h);
    //teste 3
    cont+=testa(b,c,l,h);
    //teste 4
    cont+=testa(b,a,l,h);
    //teste 5
    cont+=testa(c,a,l,h);
    //teste 6
    cont+=testa(c,b,l,h);
    if(cont>0)
    {
        printf("S\n");
    }
    else{
        printf("N\n");
    }


    return 0;
}
