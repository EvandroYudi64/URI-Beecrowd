#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int hpstat(int iv , int bs , double ev , int l )
{
    int HP;
    HP = (((iv+bs+((sqrt(ev))/8)+50)*l)/50)+10;
    return HP;
}
int otherstat(int iv , int bs , double ev , int l )
{
    int S;
    S = (((iv+bs+((sqrt(ev))/8))*l)/50)+5;
    return S;
}
int main()
{
    int n ,i , k , j , aux , bs , iv , l , HP , AT , DF , SP ;
    double ev;
    char pokemon[30];
    scanf("%d" , &n);
    for(k=0 ; k<n ; k++)
    {
        scanf("%s" , pokemon);
        scanf("%d" , &l);

        scanf("%d %d %lf" , &bs , &iv , &ev);
        HP = hpstat(iv , bs , ev , l);
        scanf("%d %d %lf" , &bs , &iv , &ev);
        AT = otherstat(iv , bs , ev , l);
        scanf("%d %d %lf" , &bs , &iv , &ev);
        DF = otherstat(iv , bs , ev , l);
        scanf("%d %d %lf" , &bs , &iv , &ev);
        SP = otherstat(iv , bs , ev , l);
        printf("Caso #%d: %s nivel %d\n" , k+1 , pokemon , l);
        printf("HP: %d\nAT: %d\nDF: %d\nSP: %d\n" , HP , AT , DF , SP);
    }
     return 0;
}
