#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct Candidato{
    char nome[60];
    char escolha[4];

}Candidato;
int compararNome (const void *a, const void *b)
{
    return strcmp (((struct Candidato *)a)->nome,((struct Candidato *)b)->nome);
}
int main() {
    Candidato v[10000];
    Candidato yess[10000];
    Candidato noo[10000];
    char amigo[50];
    int i=0,j,l=0, m=0, k=0, cont=0, posiesc=0;

    do{
        scanf("%s", v[i].nome);
        if(strcmp(v[i].nome,"FIM")==0)
        {
            break;
        }
        scanf("%s", v[i].escolha);
        i++;
    }while(1);
    for(j=0;j<i;j++)
    {
       if(strcmp(v[k].escolha, "YES")==0)//faz a verificacao somente coms os com YES
       {
           if(strcmp(v[j+1].escolha, "YES")==0 && strlen(v[k].nome) < strlen(v[j+1].nome) ) // compara o proximo yes e se ele é maior que o anterior, se for salva a posição do maior
           {
               k=j+1;
           }
       }
       else
       {
           k++;
           j++;
       }
    }
    strcpy(amigo, v[k].nome);
    while(cont<i)
    {
        if(strcmp(v[cont].escolha, "YES")==0)
        {
            strcpy(yess[l].nome,v[cont].nome);
            l++;
        }
        else
        {
            strcpy(noo[m].nome,v[cont].nome);
            m++;
        }
        cont++;
    }
    qsort(yess, l, sizeof(struct Candidato), compararNome);
    qsort(noo, m, sizeof(struct Candidato), compararNome);
    for(j=1;j<l;j++)
    {
        if(strcmp(yess[j].nome, yess[j-1].nome)!=0)
        {
            printf("%s\n",yess[j-1].nome);
        }
        if(j==l-1)
        {
           printf("%s\n",yess[j].nome);
        }
    }
    for(j=1;j<m;j++)
    {
        if(strcmp(noo[j].nome, noo[j-1].nome)!=0)
        {
            printf("%s\n",noo[j-1].nome);
        }
        if(j==m-1)
        {
            printf("%s\n",noo[j].nome);
        }
    }
    printf("\nAmigo do Habay:\n%s\n", amigo);
    return 0;
}
