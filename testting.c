#include<stdio.h>

int main()

{
    int x=-121;
    int temp=x,r,revno=0;

    while(x!=0)
    {
        r=x%10;
        revno=(10*revno)+r;
        x=x-r;
        x=x/10;
    }
    
    printf("\nREVNO: %d", revno);
    if(temp==revno)
    {
        printf("\nPALINDROME");
    }
    else
    {
        printf("\nNOT A PLAINDROME.");
    }
    return 0;
}