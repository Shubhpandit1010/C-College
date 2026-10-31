#include<stdio.h>

int noofdigits(int n)
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
int PLUSONE(int digits, int number)
{
    number+=1;
    int test=noofdigits(number);
    int a[test];

    int r,j=test-1;
    while(number!=0)
    {
        r=number%10;
        a[j]=r;
        number=number-r;
        number=number/10;
        j--;
    }
    for(int i=0;i<test;i++)
    {
        printf("%d ", a[i]);
    }
}
int main()

{
    int digits,number;
    printf("\nEnter digits and number:->  ");
    scanf("%d %d", &digits,&number);
    
    PLUSONE(digits,number);
    return 0;
}