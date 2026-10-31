#include<stdio.h>
#define size 10

int main()

{
    int a[size];

    printf("\nEnter %d Values:-> ", size);

    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    //Bubble Sorting Begins Now..

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

    printf("\nThe SORTED ARRAY IS:-> ");

    for(int i=0;i<size;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}