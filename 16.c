#include<stdio.h>

int main()

{
    int a,b,c;
    printf("\nEnter Three Nos.:-> ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c)
    {
        printf("\nA is max..");
    }
    else if(b>a && b>c)
    {
        printf("\nB is max..");
    }
    else
    {
        printf("\nC is max...");
    }
    return 0;
}