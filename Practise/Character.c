#include<stdio.h>

int main()

{
    char c;
    int ascii;

    printf("\nEnter Character: ");
    scanf("%c", &c);

    ascii=c;

    if(ascii>=65 && ascii<=91)
    {
        printf("\nUpper-Case Character..");
    }
    else if(ascii>=97 && ascii<=123)
    {
        printf("\nLower-Case Character..");
    }
    else if(ascii>=48 && ascii<=57)
    {
        printf("\nDigit..");
    }
    else
    {
        printf("\nSpecial Character..");
    }

    return 0;
}