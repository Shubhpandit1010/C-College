#include<stdio.h>

int main()

{
    int a[]={5,10,2,45,100};

    int l=a[0],sl=a[0];

    for(int i=1;i<5;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl)
        {
            sl=a[i];
        }
    }
    printf("\nLARGEST: %d\nSECOND LARGEST: %d", l,sl);
    return 0;
}