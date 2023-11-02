#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int contadigitos(char numero[])
{

   // printf("string=%s->>>>>>>string len %d\n",numero,strlen(numero));
    if(strlen(numero)==1)
    {
        return((int)(numero[0]-48));
    }
    int i=0;
    int x=0;
    for(i=0;i<strlen(numero);i++)
    {
        x+=(int)(numero[i]-48);
    }
  //  printf("x=%d\n", x);
    i=0;
    char numero1[1010];
    while(x-1>=0)
    {
        numero1[i]=(char)((x%10)+48);
       // printf("i=%d -> n1=%c\n", i,numero1[i]);
        x=x/10;
        i++;
    }
    numero1[i]=0;
    return contadigitos(numero1);
}
int main() {
    int x,y;
    char n1[1010];
    char n2[1010];
    while(1)
    {
        scanf("%s %s",n1,n2);
         //printf("string len %d\n",strlen(n1));
        if(strcmp(n1,"0")==0 && strcmp(n2,"0")==0)
        {
            break;
        }
        x=contadigitos(n1);
        y=contadigitos(n2);
        if(x==y)
            printf("0\n");
        else if(x>y)
            printf("1\n");
        else if(x<y)
            printf("2\n");


    }
    return 0;
}
