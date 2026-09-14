#include<stdio.h>

int main()

{
    int n,a[100];
    printf("\nEnter No. in Decimal:-> ");
    scanf("%d", &n);
    int r,index=0;
    while(n!=1)
    {
        a[index]=n%2;
        index+=1;
        n=n/2;
    }
    a[index]=1;

    for(int i=index;i>=0;i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}