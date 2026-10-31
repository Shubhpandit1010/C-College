#include<stdio.h>

int main()

{
    int a[10];

    for(int i=0;i<10;i++)
    {
        printf("\nEnter No.:-> ");
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
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
        //The List Has Been Sorted..

        // Binary Search Logic Begins Now..

            int low=0,high=9,mid,target;

            printf("\nEnter Target:-> ");
            scanf("%d", &target);

            while(a[low]<=a[high])
            {
                mid=(low+high)/2;


                if(a[mid]==target)
                {
                    printf("\nTarget Found.. at index %d", mid);
                    return 0;
                }
                if(target>a[mid])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
}