#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No.: ");
    scanf("%d", &n);

    int temp=n,r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=(10*rev)+r;
        n=n-r;
        n=n/10;
    }

    if(rev==temp)
    {
        printf("\nPALINDROME..");
    }
    else
    {
        printf("\nNOT A PALINDROME...");
    }
    return 0;
}