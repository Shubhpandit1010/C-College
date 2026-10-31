#include<stdio.h>

int main()

{
    char c[5];

    printf("\nEnter Name: ");
    scanf("%s", c);

    int count=0;
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]=='h')
        {
            count+=1;
        }
    }
    printf("\nCOUNT: %d", count);
    return 0;
}