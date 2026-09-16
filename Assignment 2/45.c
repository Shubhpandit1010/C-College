#include<stdio.h>

int main()

{
    int a[10],np=0,nn=0,n0=0;

    for(int i=0;i<10;i++)
    {
        printf("\nEnter No.: ");
        scanf("%d", &a[i]);

        if(a[i]==0)
        {
            n0=n0+1;
        }
        else if(a[i]>0)
        {
            np=np+1;
        }
        else
        {
            nn=nn+1;
        }
    }
    printf("\nZERO: %d\nPOSITIVE: %d\nNEGATIVE: %d", n0,np,nn);
    return 0;
}