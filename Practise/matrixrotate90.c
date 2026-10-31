#include<stdio.h>

int main()

{
    int N=4;
    int arr[N][N];

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

     int temp;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N/2;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][N-i-1];
            arr[i][N-i-1]=temp;
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}