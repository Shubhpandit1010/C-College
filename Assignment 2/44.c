#include<stdio.h>

int main()

{
    int a[10],codd=0,ceven=0;

    for(int i=0;i<10;i++)
    {
        printf("\nEnter No.: ");
        scanf("%d", &a[i]);

        if(a[i]%2==0)
        {
            ceven=ceven+1;
        }
        else
        {
            codd=codd+1;
        }
    }
    printf("\nODD: %d\nEVEN: %d", codd,ceven);
    return 0;
}