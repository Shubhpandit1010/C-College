#include<stdio.h>

int main()

{
    char c;
    printf("\nEnter C: ");
    scanf("%c", &c);

    if(c>=97 && c<=123)
    {
        printf("\nSMALL CHARACTER");
    }
    else if(c>=65 && c<=91)
    {
        printf("\nCaptal Character");
    }
    else if(c>='0' && c<='9')
    {
        printf("\nNumber");
    }
    else
    {
        printf("\nSPecial..");
    }

    return 0;
}