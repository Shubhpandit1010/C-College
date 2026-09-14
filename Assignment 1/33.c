#include<stdio.h>

int main()

{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("\nEnter No: ");
        scanf("%d", &a[i]);
    }
    int min=a[0],max=a[0];

    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMAX : %d\nMIN : %d", max,min);
    return 0;
}