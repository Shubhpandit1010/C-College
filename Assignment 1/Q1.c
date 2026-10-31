#include<stdio.h>

int main()

{
    int p,r,t,si;
    printf("\nEnter Principal:-> ");
    scanf("%d", &p);
    printf("\nEnter Rate of Interest:-> ");
    scanf("%d", &r);
    printf("\nEnter Time:-> ");
    scanf("%d", &t);
    si=(p*r*t)/100;
    printf("\nSimple Interest:-> %d", si);
    return 0;
}