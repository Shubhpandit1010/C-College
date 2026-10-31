#include<stdio.h>
#define size 10

int main()

{
    int a[size],*p;

    p=a;

    for(int i=0;i<10;i++)
    {
        printf("\nEnter %d Element :-> ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nEntered ARRAY:-> ");
    for(int i=0;i<10;i++,p++)
    {
        printf("\n%d", *p);
    }
    return 0;
}