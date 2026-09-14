#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No:-> ");
    scanf("%d", &n);
    int temp=n;
    int rev=0;
    int r;
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
        printf("\nNOT PALINDROME..");
    }
    return 0;
}