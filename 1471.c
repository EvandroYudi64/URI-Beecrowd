#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main ()
{
    int n , r ,i, voltou , mergulhadores[MAX]={0};
    while(( scanf("%d %d " , &n , &r))!=EOF)
    {
       
        if (n == r)
        {
            for(i=1 ; i<=n ; i++)
            {
                scanf("%d" , &mergulhadores[i]);
            }
            printf("*");
            for(i=1 ; i<= n ; i++)
            {
                mergulhadores[i] = 0;
            }
        }
        else if(n!=r)
        {
                for (i = 1; i <= r; i++)
                {
                    scanf("%d", &voltou);
                    mergulhadores[voltou] = 1;
                }

                for (i = 1; i <= n; i++)
                {
                    if (mergulhadores[i]==0)
                    {
                        printf("%d ", i);
                    }
                }
                for(i=1 ; i<= n ; i++)
                {
                    mergulhadores[i] = 0;
                }
        }
        n=0;
        r=0;
        printf("\n");
    }
    return 0;
}
