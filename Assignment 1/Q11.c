#include<stdio.h>

int main()

{
    long totalsec;
    int days,hours,mins,sec,temp;

    printf("\nEnter TotalSeconds:-> ");
    scanf("%ld", &totalsec);

    days=totalsec/(24*60*60);
    temp=totalsec%(24*60*60);
    hours=temp/(60*60);
    temp=temp%(60*60);
    mins=temp/60;
    temp=temp%60;
    sec=temp;

    if(days!=0)
    {
        printf("\n(%d Days)", days);
    }
    if(hours!=0)
    {
        printf("(%d Hours)", hours);
    }
    if(mins!=0)
    {
        printf("(%d Minutes)", mins);
    }
    if(sec!=0)
    {
        printf("(%d Seconds)", sec);
    }
    return 0;
}