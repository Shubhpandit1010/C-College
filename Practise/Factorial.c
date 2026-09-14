#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No.: ");
    scanf("%d", &n);
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("\nFactorial:-> %d", ans);
    return 0;
}