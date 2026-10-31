#include<stdio.h>

int main()

{
    int a[3][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}};

    int ab[3]={0,1,2};

    printf("\na[0][0]: %u\na[2][0]=%u", *a, *(a+2));
    int d=**(a+2);
    printf("\n%u", d);
    return 0;
}