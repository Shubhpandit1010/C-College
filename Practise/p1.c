#include<stdio.h>

int main()

{
    char ch;
    for(int i=1;i<=5;i++)
    {
        for(int j=1, ch='A';j<=i;j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}