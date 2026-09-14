#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No.: ");
    scanf("%d", &n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\nNot Prime..");
            return 0;
        }
    }
    printf("\nPrime No....");
    return 0;
}