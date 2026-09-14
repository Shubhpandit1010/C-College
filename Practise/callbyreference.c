#include<stdio.h>

void test(int *a,int *b)
{
    *a=5;
    *b=10;
}
int main()

{
    int a=40,b=50;
    printf("\n%d %d", a,b);
    test(&a,&b);
    printf("\n%d %d", a,b);
    return 0;
}