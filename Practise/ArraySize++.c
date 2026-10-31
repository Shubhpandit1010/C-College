#include<stdio.h>
#include<stdlib.h>

int main()
{
    int increase;
    int digits;
    printf("\nEnter the size of array to be declared:-> ");
    scanf("%d", &digits);

    int *a[digits];
    printf("\nSize of a: %d", sizeof(*a));
    printf("\nEnter the No by which array size should increase: ");
    scanf("%d", &increase);

    *a[digits]=*a[digits+increase];
     printf("\nSize of a: %d", sizeof(*a));

    return 0;
}