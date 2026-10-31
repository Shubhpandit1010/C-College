#include<stdio.h>

int main()

{
    int a,b;
    printf("\nEnter a,b to find their HCF:-> ");
    scanf("%d %d", &a,&b);

    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("\nHCF:-> %d", a);
    return 0;
}