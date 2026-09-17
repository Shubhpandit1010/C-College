#include<stdio.h>

int main()

{
    int a,b,c;
    printf("\nEnter a,b,c respectively:-> ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c)
    {
        printf("\nA (%d) is max.", a);
    }
    else if(b>c && b>a)
    {
        printf("\nB (%d) is max.", b);
    }
    else
    {
        printf("\nC (%d) is max.", c);
    }
    return 0;
}