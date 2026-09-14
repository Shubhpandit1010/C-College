#include<stdio.h>
#include<string.h>

int main()

{
    char a[10];
    
    printf("\nEnter String:-> ");
    scanf("%s", a);
    int l=strlen(a);
    char tempstr[10];
    strcpy(tempstr,a);
    char temp;

    for(int i=0;i<l/2;i++)
    {
        temp=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=temp;
    }
    a[l]='\0';

    printf("\nReversed:-> %s\nOriginal: %s", a,tempstr);

    if(strcmp(tempstr,a)==0)
    {
        printf("\nPalindrome..");
    }
    else
    {
        printf("\nNOT A PALINDROME...");
    }
    return 0;
}