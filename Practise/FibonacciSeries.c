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
            printf("%d ", f);
        }
        else if(i==2)
        {
            printf("%d ", s);
        }
        else
        {
            t=f+s;
            printf("%d ", t);
            f=s;
            s=t;
        }
    }
    return 0;
}