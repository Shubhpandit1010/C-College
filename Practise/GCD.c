#include<stdio.h>

int main()

{
    int n1,n2;
    printf("\nEnter Two Nos. (1st should be strictly greater than 2nd):-> ");
    scanf("%d %d", &n1,&n2);

    int r;
    if(n2>n1)
    {
        printf("\nERROR..");
        return 0;
    }
    else
    {
        while(n2!=0)
        {
            r=n1%n2;
            n1=n2;
            n2=r;
        }
    }
    printf("\nGCD:-> %d", n1);
    return 0;
}