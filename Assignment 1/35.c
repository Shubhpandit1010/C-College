#include<stdio.h>

int digits(int n)
{
    int r,digits=0;
    while(n!=0)
    {
        r=n%10;
        n=n-r;
        n=n/10;
        digits+=1;
    }
    return digits;
}

int sumofdigits(int n)
{
    int r,sum=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
        r=n%10;
        n=n-r;
        n=n/10;
        return r+sumofdigits(n);
    }
}
int main()

{
    int n;
    printf("\nEnter N:-> ");
    scanf("%d", &n);
    int sum=n;
    int temp;
    while(digits(sum)!=1)
    {
        sum=sumofdigits(sum);
        temp=sum;
        sum=sumofdigits(temp);
    }
    printf("\nDIGITAL ROOT:-> %d", sum);
    return 0;
}