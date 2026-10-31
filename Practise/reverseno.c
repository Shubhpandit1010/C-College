#include<stdio.h>

int main()

{
    int n,revno=0,r;

    printf("\nEnter No.: ");
    scanf("%d", &n);

    while(n!=0)
    {
        r=n%10;
        revno=(10*revno)+r;
        n=n-r;
        n=n/10;
    }
    printf("\nReversed No.: %d", revno);
    return 0;
}