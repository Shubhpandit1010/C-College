#include<stdio.h>

int main()

{
    int a[10];

    for(int i=0;i<10;i++)
    {
        printf("\nEnter No.: ");
        scanf("%d", &a[i]);
    }
    
    int min,temp;

    for(int i=0;i<10;i++)
    {
        min=a[i];
        for(int j=i;j<10;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        printf("\n%d", a[i]);
    }
    int top=0,down=9,mid,target;

    printf("\nEnter Target:-> ");
    scanf("%d", &target);
    
    while(top<=down)
    {
        mid=(top+down)/2;
        if(a[mid]==target)
        {
            printf("\nTARGET FOUND! at index= %d", mid);
            return 0;
        }
        if(a[mid]<target)
        {
            top=mid+1;
        }
        else
        {
            down=mid-1;
        }
    }

    return 0;
}