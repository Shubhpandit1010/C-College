#include<stdio.h>

int primenumber(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()

{
    int n;
    printf("\nEnter Number:-> ");
    scanf("%d", &n);
    int ans;
    ans=primenumber(n);
    printf("\nANS= %d", ans);
    return 0;
}