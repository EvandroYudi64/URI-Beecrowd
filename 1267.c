#include <stdio.h>

int main() {

    int n,d,x,cont,j,i;
    scanf("%d%d", &n,&d);
    while(n!=0 && d!=0)
    {
        int J[d][n];
        for(i=0;i<d;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d", &J[i][j]);
            }
        }

        for(i=0;i<n;i++)
        {
            cont=0;
            for(j=0;j<d;j++)
            {
                if(J[j][i]==1)
                    cont++;
            }
            if(cont==d)
            {
                printf("yes\n");break;
            }
        }
         if(cont!=d)
            printf("no\n");
         scanf("%d%d", &n,&d);
    }

    return 0;
}

