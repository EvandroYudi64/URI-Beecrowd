#include <stdio.h>
#include <stdlib.h>
int Mdc(int x,int y)
{
    int aux;

    if(x>y)
    {
        aux=x;
        x=y;
        y=aux;
    }

    if(y%x==0)
    {
        return x;
    }

    else
    {
        return Mdc(x,(y%x));
    }
}
int main() {
    int a,b,c,d,num,den,mdc;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    num=(a*d)+(b*c);
    den=b*d;

    mdc=Mdc(num,den);

    printf("%d %d\n", num/mdc,den/mdc);


    return 0;
}
