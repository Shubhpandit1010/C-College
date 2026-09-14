#include<stdio.h>

int main()

{
    long totalsec;
    int days,hr,min,sec;
    printf("\nEnter Total Seconds:-> ");
    scanf("%ld", &totalsec);

    days=totalsec/(24*3600);
    hr=(totalsec%86400)/3600;
    min=(totalsec%3600)/60;
    sec=totalsec%60;
    printf("\nDAYS: %d\nHours: %d\nMINUTES: %d\nSECONDS: %d", days,hr,min,sec);
    return 0;
}