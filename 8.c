#include<stdio.h>

int main()

{
    double sec,days,mins;
    printf("\nEnter in seconds:-> ");
    scanf("%lf", &sec);
    days=sec/(24*3600);
    mins=sec/60;
    printf("\nDAYS: %lf\nMINUTES: %lf", days,mins);
    return 0;
}