#include<stdio.h>

int main()

{
    int size=5,temp,check=0;
    int a[size];
    
    for(int i=0;i<size;i++)
    {
        printf("\nEnter No. ");
        scanf("%d", &a[i]);
    }

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                check+=1;
            }
        }
    }
    printf("\nChecked: %d\n", check);

    for(int i=0;i<5;i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}