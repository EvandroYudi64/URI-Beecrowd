#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char palavras[16000];
    int i=0,j=0;
    scanf("%[^\n]", palavras);
    for (i= 0; i< 20; i++)
    {
        for (j = 0; palavras[j] != '\0'; j++)
        {
            if (palavras[j] == palavras[j + 2] && palavras[j + 1] == palavras[j + 3])
            {
                palavras[j + 2] = palavras[j + 4];
                palavras[j + 3] = palavras[j + 5];
            }
        }
    }
    printf("%s\n",palavras);
    return 0;
}

