#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter NO.: ");
    scanf("%d", &n);

    if(n==1)
    {
        printf("\nNeither Prime Nor Composite..");
    }
    else
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\nCOMPOSITE...");
            return 0;
        }
    }
    
    printf("\nPRIME...");
    }
    return 0;
}