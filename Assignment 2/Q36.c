#include<stdio.h>

int main()

{
    char c;
    for(int i=1;i<=5;i++)
    {
        c='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}