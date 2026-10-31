#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No.:-> ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("\nEVEN..");
    }
    else
    {
        printf("\nODD..");
    }
    return 0;
}