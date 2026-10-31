#include<stdio.h>
#include<string.h>

int main()

{
    char c[10],temp1[10];
    printf("\nEnter String:-> ");
    scanf("%s", c);
    int length=strlen(c);
    char temp;

    strcpy(temp1,c);

    for(int i=0;i<length/2;i++)
    {
        temp=c[i];
        c[i]=c[length-i-1];
        c[length-i-1]=temp;
    }

    c[length]='\0';
    if(strcmp(temp1,c)==0)
    {
        printf("\nPALINDROME..");
    }
    else
    {
        printf("\nNOT PALINDROME..");
    }
    
    return 0;
}