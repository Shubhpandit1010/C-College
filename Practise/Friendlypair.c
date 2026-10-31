#include<stdio.h>

int main()

{
    int n1,n2,fac1=0,fac2=0;

    printf("\nEnter Two Nos.: ");
    scanf("%d %d", &n1,&n2);

    for(int i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            fac1+=i;
        }
    }
    for(int i=1;i<n2;i++)
    {
        if(n2%i==0)
        {
            fac2+=i;
        }
    }
    printf("\nFac1= %d\nFac2= %d", fac1,fac2);
    if((fac1/n1)==(fac2/n2))
    {
        printf("\nFriendly Pair.");
    }
    else
    {
        printf("\nNot Friendly Pair.");
    }
    return 0;
}