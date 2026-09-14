#include<stdio.h>

int main()

{
    char c;
    printf("\nEnter Character:-> ");
    scanf("%c", &c);
    int ascii=c;
    if(ascii>=97 && ascii<=123)
    {
        printf("\nSmall case letter..");
    }
    else if(ascii>=65 && ascii<=91)
    {
        printf("\nCapital Letter..");
    }
    else if(c>='0' && c<='9')
    {
        printf("\nDigit...");
    }
    else
    {
        printf("\nSpecial Symbol...");
    }
    return 0;
}