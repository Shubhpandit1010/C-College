#include<stdio.h>

int main()

{
    char c;
    printf("\nEnter Character:-> ");
    scanf("%c", &c);

    int ascii=c;

    (ascii>=97 && ascii<=123) ? printf("\nSMALL CASE LETTER") : printf("\nUPPER CASE LETTER");
    return 0;
}