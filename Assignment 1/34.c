#include<stdio.h>

int main()

{
    int terms;
    printf("\nEnter Terms:-> ");
    scanf("%d", &terms);

    int f=0,s=1,t;

    for(int i=1;i<=terms;i++)
    {
        if(i==1)
        {
            printf("\n%d\t", f);
        }
        else if(i==2)
        {
            printf("%d\t", s);
        }
        else
        {
            t=f+s;
            printf("%d\t", t);
            f=s;
            s=t;
        }
    }
    return 0;
}