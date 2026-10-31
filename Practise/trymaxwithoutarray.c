#include<stdio.h>

int main()

{
    int times;
    printf("\nEnter Times:-> ");
    scanf("%d", &times);

    int n,max,min;
    for(int i=1;i<=times;i++)
    {
            printf("\nEnter No.: ");
            scanf("%d", &n);

            if(i>1)
            {
                if(n>max)
                {
                    max=n;
                }
                else if(n<min)
                {
                    min=n;
                }
            }
            else
            {
                max=n;
                min=n;
            }
    }
    printf("\nMAX:%d\nMIN:%d", max,min);
    return 0;
}