#include <stdio.h>

int main() {

    int i, j,flag=0;
    int x[5],y[5];
    for(i=0;i<5;i++)
    {
        scanf("%d", &x[i]);
    }
    for(i=0;i<5;i++)
    {
        scanf("%d", &y[i]);
    }
    for(i=0;i<5;i++)
    {
        if(x[i]==y[i])
        {
            flag++;
        }
    }
    if(flag>0)
    {
        printf("N\n");
    }
    else {
        printf("Y\n");
    }


    return 0;
}
