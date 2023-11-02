#include <stdio.h>
 
int main() {
 
    int i, n, out=0, in=0, num;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &num);
        if(num>=10 && num<=20)
            in++;
            
        else out++;
    }
    printf("%d in\n%d out\n", in , out );
 
    return 0;
}
