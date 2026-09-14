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
    int factors[100];
    printf("\nEnter Number:-> ");
    scanf("%d", &n);
    int count=0,ctemp=0;
    int check,temp[10];
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            check=primenumber(i);
            if(check==0)
            { 
                temp[ctemp]=n/i;
                ctemp+=1;
                factors[count]=i;
                printf("\n%d", factors[count]);
             }
        }
        count+=1;
    }
    printf("\nRemaining:-> %d", temp);
    return 0;
}