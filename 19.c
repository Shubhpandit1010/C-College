#include<stdio.h>

int main()

{
    char c;
    printf("\nEnter Character:-> ");
    scanf("%c", &c);
    int ascii=c;
    if(ascii>=97 && ascii<=123)
    {
        printf("\nSMALL CASE CHARACTER...");
    }
    else
    {
        printf("\nNOT SMALL CASE CHARACTER..");
    }
    return 0;
}