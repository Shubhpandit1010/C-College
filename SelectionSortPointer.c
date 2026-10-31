#include<stdio.h>
#define size 10
int main()

{
    int a[size], *p;
    p=a;

    printf("\nEnter %d ARRAY ELEMENTS :-> ", size);

    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    int min,temp;
    for(int i=0;i<10;i++)
    {
        min=*p;

        for(int j=i;j<10;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        p++;
    }

    for(int i=0;i<10;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}