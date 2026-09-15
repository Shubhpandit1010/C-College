#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter Size of Array: ");
    scanf("%d", &n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("\nEnter No.: ");
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}