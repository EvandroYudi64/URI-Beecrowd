#include <stdio.h>
#include <stdlib.h>
void soma(int n,int p,int q)
{
    int soma = p+q;
    if(soma>n)
        printf("OVERFLOW\n");
    else
        printf("OK\n");
}
void mult(int n,int p,int q)
{
    int mult = p*q;
    if(mult>n)
        printf("OVERFLOW\n");
    else
        printf("OK\n");
}
 
int main() {
    int n,p,q;
    char c;
    scanf("%d%d %c %d",&n,&p,&c,&q);
    switch(c)
    {
        case '+':
        soma(n,p,q);
        break;
        
        case '*':
        mult(n,p,q);
        break;
    }
   
 
    return 0;
}
