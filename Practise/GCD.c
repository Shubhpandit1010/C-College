#include<stdio.h>

int main()

{
    int n1,n2;
    printf("\nEnter Two Nos.: ");
    scanf("%d %d", &n1,&n2);

    int r;
    while(n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }

    printf("\nGCD: %d", n1);
    return 0;
}