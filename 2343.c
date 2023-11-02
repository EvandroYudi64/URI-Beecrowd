#include <stdio.h>
int main() {

    int n,x,y,flag=0,i,j;
    scanf("%d", &n);
    int M[501][501];
    for(i=0;i<501;i++)
    {
        for(j=0;j<501;j++)
        {
            M[i][j]=0;
        }

    }
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        M[x][y]++;
        if(M[x][y]>1)
        {
            flag=1;
            printf("1\n");
            break;
        }
    }
    if(flag<1)
    {
        printf("0\n");
    }
    return 0;
}
