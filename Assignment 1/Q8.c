#include<stdio.h>

int main()

{
    double sec,days,mins,hours;
    printf("\nEnter in seconds:-> ");
    scanf("%lf", &sec);
    days=sec/(24*60*60);
    hours=sec/3600;
    mins=sec/60;
    printf("\nDAYS: %lf\nHOURS: %lf\nMINUTES: %lf", days,hours,mins);
    return 0;
}