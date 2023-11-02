 
#include <stdio.h>
 
int main() 
{
    int a , b;
    scanf("%d%d" , &a , &b);
    if (b >= 97 && b <= 100)
    {
        printf("cheia\n");
    }
    else if (b >= 0 && b <= 2)
    {
        printf("nova\n");
    }
    else if (b >= 3 && b <= 96 && b > a)
    {
        printf("crescente\n");
    }
    else
        printf("minguante\n");
    
    return 0;
}
