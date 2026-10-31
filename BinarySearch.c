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

    int top=0,bottom=4,mid,target;
    printf("\nEnter Target: ");
    scanf("%d", &target);
    while(top<=bottom)
    {
        mid=(top+bottom)/2;
        if(target==a[mid])
        {
            printf("\nTarget Found at index %d..", mid);
            return 0;
        }
        else if(a[mid]>target)
        {
            bottom=mid-1;
        }
        else
        {
            top=mid+1;
        }
    }    
    return 0;
}