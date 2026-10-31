#include<stdio.h>

int main()

{
    int n;
    //printf("\nEnter N:->  ");
    scanf("%d", &n);

    int arr[n];

    //printf("\nEnter %d single digit numbers (0 to 9):-> ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int count,i,k;
    for(i=1;i<=n;i++)
    {
        for(k=(2*n)-(2*i);k>0;k=k-2)
        {
            printf("  ");
        }
        for(count=0;count<i;count++)
        {
            printf("%d ", arr[count]);
        }
        for(count=i-2;count>=0;count--)
        {
            printf("%d ", arr[count]);
        }
        printf("\n");
    }
    return 0;
}