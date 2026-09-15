#include<stdio.h>

int GCD(int n1,int n2)
{
    if(n2==0)
    {
        return n1;
    }
    else
    {
        return GCD(n2,n1%n2);
    }
}
int main()

{   
    printf("\nGCD: %d", GCD(48,18));
    return 0;
}