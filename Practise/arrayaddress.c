#include<stdio.h>

int main()

{
    int a[3][5];

    printf("\na[0][0]=%u", &a[0][0]);
    printf("\na[2][0]=%u", (a+2));
    return 0;
}