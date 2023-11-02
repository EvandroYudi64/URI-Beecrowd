#include <stdio.h>

int main()
{
    int X, Y, completax, completay, voltas;

    scanf("%d %d", &X, &Y);
    completax = 0;
    completay = 0;
    voltas = 1;

    do
    {
        voltas++;
        completax += X;
        completay += Y;
    }while((completay - completax) < X);

    printf("%d\n", voltas);

    return 0;
}
