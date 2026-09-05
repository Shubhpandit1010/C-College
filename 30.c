#include<stdio.h>

int main()

{
    int n,rev=0,r;
    printf("\nEnter No:-> ");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        rev=(10*rev)+r;
        n=n-r;
        n=n/10;
    }
    printf("\nReversed No: %d", rev);
    return 0;
}