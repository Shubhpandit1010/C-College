#include<stdio.h>

int factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int main()

{
    int N;
    printf("\nEnter N: ");
    scanf("%d", &N);

    float sum=0;
    for(int i=1;i<=N;i++)
    {
        printf(" %d/%d!-> ", i,i);
        sum+=(float)i/(factorial(i));
    }

    printf("\nValue is %f", sum);
    return 0;
}