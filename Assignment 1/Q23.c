#include<stdio.h>

int main()

{
    int base,power;
    printf("\nEnter Number's base and power:-> ");
    scanf("%d %d", &base,&power);

    int ans=1;

    for(int i=1;i<=power;i++)
    {
        ans=ans*base;
    }
    printf("\nPOWER: %d", ans);
    return 0;
}