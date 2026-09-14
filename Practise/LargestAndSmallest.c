#include<stdio.h>

int main()

{
    int a[5];
    
    for(int i=0;i<5;i++)
    {
        printf("\nEnter No.: ");
        scanf("%d", &a[i]);
    }

    int max=a[0],min=a[0];

    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }

    printf("\nMAX: %d\nMIN: %d", max,min);
    return 0;
}