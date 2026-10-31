#include<stdio.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }
}
int main()

{
    int range=5;
    printf("\nSUM 1-5: %d", sum(range));
    return 0;
}