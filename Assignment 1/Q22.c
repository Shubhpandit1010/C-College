#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No for finding its factorial:-> ");
    scanf("%d", &n);
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("\nFACTORIAL: %d", ans);
    return 0;
}