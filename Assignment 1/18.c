#include<stdio.h>

int main()

{
    int a,b,c;
    printf("\nEnter Three Nos.: ");
    scanf("%d %d %d", &a,&b,&c);
    a>b && a>c ? printf("\nA is max..") : b>c && b>a ? printf("\nB is max...") : printf("\nC is max...");
    return 0;
}