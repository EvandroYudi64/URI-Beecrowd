#include <stdio.h>

int maior(int x, int y)
{
    if(x>y)return x;
    else return y;
}
int gira(int l[], int h[], int x, int y)
{
    int cont=0;
    if(l[0]+l[1]<=x && maior(h[0],h[1])<=y)
    {
        cont=1;
    }
    else if(h[0]+h[1]<=x && maior(l[0],l[1])<=y)
    {
        cont=1;
    }
    else if(h[0]+l[1]<=x && maior(l[0],h[1])<=y)
    {
        cont=1;
    }
    else if(l[0]+h[1]<=x && maior(h[0],l[1])<=y)
    {
        cont=1;
    }
    return cont;
}
int main() {

   int x,y,l[2],h[2];
   scanf("%d%d", &x,&y);
   scanf("%d%d", &l[0], &h[0]); //indice 0 = foto 1 width & foto 1 height
   scanf("%d%d", &l[1], &h[1]);  //indice 1 = foto 2 width & foto 2 height
   int verifica=gira(&l,&h,x,y);//verifica girando as fotos e mantendo o album na mesma posição
   int verifica2=gira(&l,&h,y,x);//verifica girando as fotos e o album
   if(verifica==1 || verifica2==1)printf("S\n");
   else printf("N\n");


    return 0;
}
