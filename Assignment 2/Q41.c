#include<stdio.h>

int main()

{
    int temp;
    for(int i=1;i<=4;i++)
    {
        temp=i;
        for(int j=3;j>=i;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            if(k==i)
            {
                printf("%d ", i);
                temp--;
            }
            else if(k>i)
            {
                printf("%d ", temp);
                temp--;
            }
            else
            {
                printf("%d ", k);
            }
        }
        printf("\n");
    }
    return 0;
}