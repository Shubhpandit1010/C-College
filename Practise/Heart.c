#include<stdio.h>

int main()

{
    for(int i=1;i<=5;i++)
    {
        for(int k=4;k>=i;k--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*   ");
        }
           for(int f=4;f>=i;f--)
        {
            printf("    ");
        }
        for(int g=1;g<=i;g++)
        {
            printf("*   ");
        }

        printf("\n");
    }

    for(int i=10;i>=1;i--)
    {
        for(int k=10;k>i;k--)
        {
            printf("  ");
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}