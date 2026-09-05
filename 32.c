#include<stdio.h>

int main()

{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("\nEnter No : ");
        scanf("%d", &a[i]);
    }

    int max,temp;
    for(int i=0;i<5;i++)
    {
        max=a[i];
        for(int j=i;j<5;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nMAX: %d\nSecond MAX: %d", a[0],a[1]);
    return 0;
}
