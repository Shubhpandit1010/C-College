#include<stdio.h>

int main()

{
    int terms;
    printf("\nEnter MAX Terms:-> ");
    scanf("%d", &terms);

    int f=0,s=1,t;
    if(terms==1)
    {
        printf("\n%d ", f);
        return 0;
    }
    else if(terms==2)
    {
        printf("\n%d %d", f,s);
        return 0;
    }
    else
    {
        for(int i=1;i<=terms;i++)
        {
            if(i==1)
            {
                printf("\n%d ", f);
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
    }
    return 0;
}