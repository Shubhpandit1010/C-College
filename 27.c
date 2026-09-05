#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No.:-> ");
    scanf("%d", &n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\nNOT PRIME..");
            return 0;
        }
    }
    printf("\nPRIME..");
    return 0;
}