#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    char msg[10000] , crib[10001];
    int aux=0,cont=0,n;
    int i,j=0,tam_msg,tam_crib;
    scanf("%s %s", crib,msg);
    tam_msg=strlen(msg);
    tam_crib= strlen(crib);
    for(i=0;i<tam_crib;i++)
    {
        for(j=0;j<tam_msg;j++)
        {
            if(i+j>=tam_crib)
                break;
            if(msg[j]==crib[i+j])
                break;

        }
        if(j==tam_msg)
        {
            aux++;
        }
    }
   printf("%d\n", aux);

    return 0;
}
