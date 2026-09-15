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
    int n1,n2;
    printf("\nEnter Two Nos.: ");
    scanf("%d %d", &n1,&n2);

    printf("\nHCF: %d", GCD(n1,n2));
    return 0;
}