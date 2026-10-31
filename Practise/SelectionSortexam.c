#include<stdio.h>

const int size=10;
int main()

{
    int a[size];
    printf("\nEnter %d nos. ", size);

    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    int min,temp;

    for(int i=0;i<size;i++)
    {
        min=a[i];
        for(int j=i;j<size;j++)
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

    printf("\nSORTED ARRAY _-_-_-_-_-_");
    for(int i=0;i<size;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}