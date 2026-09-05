#include<stdio.h>

int main()

{
    int a,b;
    printf("\nEnter a and b respectively:-> ");
    scanf("%d %d", &a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("\nNow A: %d and B: %d", a,b);
    return 0;
}