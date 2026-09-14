#include<stdio.h>

int power(int base,int exp)
{
    int answer=1;
    for(int i=1;i<=exp;i++)
    {
        answer=answer*base;
    }
    return answer;
}
int main()

{
    int n;
    printf("\nEnter No.:-> ");
    scanf("%d", &n);
    int temp=n,r,times=0,sum=0,ftemp=n;

    while(n!=0)
    {
        r=n%10;
        n=n-r;
        n=n/10;
        times+=1;
    }
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+power(r,times);
        temp=temp-r;
        temp=temp/10;
    }

    if(ftemp==sum)
    {
        printf("\nARMSTRONG NUMBER...");
    }
    else
    {
        printf("\nNOT ARMSTRONG NUMBER...");
    }
    return 0;
}