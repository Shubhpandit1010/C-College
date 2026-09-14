#include<stdio.h>

int main()

{
    int a[5];

    for(int i=0;i<5;i++)
    {
        printf("\nEnter No.: ");
        scanf("%d", &a[i]);
    }

    int min,temp;

    for(int i=0;i<5;i++)
    {
        min=a[i];
        for(int j=i;j<5;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}