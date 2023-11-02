#include <stdio.h>

int main() {

    float precokg,p,menor,g,vlkg;
    int n,i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f", &p, &g);
        vlkg=1000/g;
        precokg=(p*vlkg);
        if(i==0)
        {
            menor=precokg;
        }
        if(precokg<menor)
        {
            menor=precokg;
        }
    }
    printf("%.2f\n", menor);

    return 0;
}
