#include<stdio.h>

int main()

{
    int a[10],sum=0;

    for(int i=0;i<10;i++)
    {
        printf("\nEnter No.: ");
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    printf("\nSUM:-> %d", sum);
    return 0;
}