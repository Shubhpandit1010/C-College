#include<stdio.h>

int main()

{
    int start,end;
    printf("\nEnter Start and End Values:-> ");
    scanf("%d %d", &start,&end);

    for(int i=start;i<=end;i++)
    {
        if(i<=1)
        {
            continue;
        }

        int assumeprime=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                assumeprime=0;
            }
        }
        if(assumeprime==1)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}