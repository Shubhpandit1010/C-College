#include<stdio.h>

const int size=10;
int main()

{
    int a[size];

    printf("\nEnter %d nos.: ", size);    

    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nSORTED ARRAY _-_-_-_ ");
    for(int i=0;i<size;i++)
    {
        printf("\n %d", a[i]);
    }
    return 0;
}