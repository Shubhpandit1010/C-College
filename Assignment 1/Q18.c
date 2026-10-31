#include<stdio.h>

int main()

{
    int a,b,c;
    printf("\nEnter Three Nos.: ");
    scanf("%d %d %d", &a,&b,&c);
    (a>b && a>c) ? printf("\nA (%d) is max..", a) : (b>c && b>a) ? printf("\nB (%d) is max...", b) : printf("\nC (%d) is max...", c);
    return 0;
}