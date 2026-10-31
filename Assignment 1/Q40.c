#include<stdio.h>

int main()

{
    int n,sum=0;

    while(1)
    {
        printf("\nEnter Number:-> ");
        scanf("%d", &n);

        if(n<0)
        {
            break;
        }
        else
        {
            sum=sum+n;
        }
    }
    printf("\nSUM:-> %d ", sum);
    return 0;
}