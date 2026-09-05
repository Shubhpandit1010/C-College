#include<stdio.h>

int main()

{
    int a,b,temp;
    printf("\nEnter Two Variables:-> ");
    scanf("%d %d", &a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nA: %d\nB: %d", a,b);
    return 0;
}