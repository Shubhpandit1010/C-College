#include<stdio.h>

int main()

{
    int n;
    printf("\nENter NO: ");
    scanf("%d", &n);
    int sum=0,r;
    
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n-r;
        n=n/10;
    }
    printf("\nSUM of DIGITS: %d", sum);
    return 0;
}