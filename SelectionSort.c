#include<stdio.h>

int main()

{
    int a[10];

    printf("\nEnter 10 Values:-> ");

    for(int i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nENTERED ARRAY:-> ");

    for(int i=0;i<10;i++)
    {
        printf("\n%d", a[i]);
    }

    int min,temp;

    for(int i=0;i<(10-1);i++)
    {
        min=a[i];
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
    }

    printf("\nSORTED ARRAY:-> ");

    for(int i=0;i<10;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}