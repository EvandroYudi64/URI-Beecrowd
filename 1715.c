#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n , m , i , j , gols , partida=0;
	scanf("%d%d" , &n , &m);
	int** matriz;
	matriz=(int **)malloc(n * sizeof(int*));
	for(i=0 ; i< n ; i++)
	{
		matriz[i]=(int *)malloc(m * sizeof(int));
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			scanf("%d" , &matriz[i][j]);
		}
	}
	for(i=0 ; i<n ; i++)
	{
		gols=0;
		for(j=0 ; j<m ; j++)
		{
			if(matriz[i][j]>0)
			{
				gols++;
			}
		}
		if(gols==m)
		{
			partida++;
		}
	}
	printf("%d\n" , partida);
	return 0;
}
