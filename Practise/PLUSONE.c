#include<stdio.h>

int PlusOne(int digit,int digitsize)
{
    int a[50];
    digit+=1;

    int r,i=digitsize-1;
    while(digit!=0)
    {
        r=digit%10;
        a[i]=r;
        i--;
        digit=digit-r;
        digit=digit/10;
    }

    for(int i=0;i<digitsize;i++)
    {
        if(i==0)
        {
            printf("[ %d", a[i]);
        }
        else if(i==digitsize-1)
        {
            printf("%d ]", a[i]);
        }
        else
        {
            printf(" %d ", a[i]);
        }
    }
}
int main()

{
    int digit,digitsize;
    printf("\nEnter Digit's Size and Digit respectively:-> ");
    scanf("%d %d", &digitsize,&digit);

    PlusOne(digit,digitsize);
}