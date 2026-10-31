#include<stdio.h>

int main()

{
    int a[6]={5,1,15,20,25,30};
    int i,j,k,m;

    i=++a[1];
    j=a[1]++;
    k=a[i++];
    m=a[++i];

    printf("\n%d %d %d %d", i,j,k,m);
    printf("\nArray: ");
    for(int i=0;i<6;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}