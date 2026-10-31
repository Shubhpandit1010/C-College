#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter Number: ");
    scanf("%d", &n);

    int divsum=0;

    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            divsum+=i;
        }
    }

    if(divsum==n)
    {
        printf("\nPerfect Number..");
    }
    else
    {
        printf("\nNot a Perfect Number..");
    }
    return 0;
}