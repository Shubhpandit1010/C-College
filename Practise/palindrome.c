#include<stdio.h>
#include<string.h>

int main()

{
    char c[10],t[10];

    printf("\nEnter String: ");
    scanf("%s", c);

    int length=strlen(c);
    strcpy(t,c);
    char temp;
    for(int i=0;i<length/2;i++)
    {
        temp=c[length-i-1];
        c[length-i-1]=c[i];
        c[i]=temp;
    }
    c[length]='\0';
    printf("\nReversed String: %s", c);

    if(strcmp(t,c)==0)
    {
        printf("\nPalindrome.");
    }
    else
    {
        printf("\nNOT Palindrome..");
    }
    return 0;
}