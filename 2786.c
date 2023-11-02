#include <stdio.h>
 
int main() {
 
    int l, c,tipo1,tipo2;
    scanf("%d%d", &l,&c);
    tipo2 = ((c-1)*2)+((l-1)*2);
    tipo1 = (l*c)+(l-1)*(c-1);
    printf("%d\n%d\n", tipo1,tipo2);
 
    return 0;
}
