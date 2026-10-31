#include<stdio.h>

int main()

{
    int a[10];

    printf("\nEnter 10 nos in ascending order:=> ");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    int low=0,high=9,key,mid;

    printf("\nEnter KEY:-> ");
    scanf("%d", &key);
    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            printf("\n%d Found at Index %d", a[mid],mid);
            return 0;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    printf("\n%d not found..", key);
    return 0;
}