#include <stdio.h>

int main()
{
    int b1 , b2 , resto , cpf , soma=0 , i , j;
    int cpf2[9];
    while((scanf("%d" , &cpf))==1)
    {
        for(i=8 ; i>=0 ; i--)
        {
            cpf2[i]=cpf%10;
            cpf=cpf/10;
        }
        for(i=0 ; i<9 ; i++)
        {
            soma+=(cpf2[i]*(i+1));
        }
        resto=soma%11;
        if(resto==10)
        {
            b1=0;
        }
        else
            b1=resto;

        soma=0;
        for(i=0 , j=9 ; i<9 ; i++ , j--)
        {
            soma+=(cpf2[i]*(j));
        }
        resto=soma%11;
        if(resto==10)
        {
            b2=0;
        }
        else
            b2=resto;

        for(i=0 ; i<9 ; i++)
        {
            printf("%d" , cpf2[i]);
            if(i==2 || i==5)
            {
                printf(".");
            }
        }
        printf("-%d%d\n" , b1 , b2);

        b1=0;
        b2=0;
        resto=0;
        soma=0;
    }


    return 0;
}
