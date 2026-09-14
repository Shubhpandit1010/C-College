#include<stdio.h>

int sumofdigits(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n-r;
        n=n/10;
    }
    return sum;
}

int countdigits(int n)
{
    int r,count=0;
    while(n!=0)
    {
        r=n%10;
        n=n-r;
        n=n/10;
        count+=1;
    }
    return count;
}
int main()

{
    int n;
    printf("\nEnter Number:-> ");
    scanf("%d", &n);
    int temp;
    temp=sumofdigits(n);
    while(countdigits(temp)!=1)
    {
        temp=sumofdigits(temp);
    }
    printf("\nDIGITAL ROOT:-> %d", temp);
    return 0;
}