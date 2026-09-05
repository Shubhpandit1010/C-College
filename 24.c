#include<stdio.h>

int power(int base,int power)
{
    int ans=1;
    for(int i=1;i<=power;i++)
    {
        ans=ans*base;
    }
    return ans;
}
int main()

{
    int y,x,n;
    printf("\nEnter x and n:-> ");
    scanf("%d %d", &x,&n);

    if(n==1)
    {
        y=1+x;
    }
    else if(n==2)
    {
        y=1+(x/n);
    }
    else if(n==3)
    {
        y=1+power(x,n);
    }
    else
    {
        y=1+(n*x);
    }
    printf("\nThe Value of Y is : %d", y);
    return 0;
}