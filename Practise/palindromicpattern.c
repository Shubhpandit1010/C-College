#include<stdio.h>

int main()

{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        for(k=3;k>=i;k--)
        {
            printf(" "); //Space.
        }
        for(j=i;j<=(2*i)-1;j++)
        {
            printf("%d", j);
        }
        for(l=j-2;l>=i;l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}