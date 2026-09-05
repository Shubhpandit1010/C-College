#include<stdio.h>

int main()

{
    long total;
    int days=0,min=0,hr=0,sec=0;
    printf("\nEnter Total Time in Seconds:-> ");
    scanf("%ld", &total);
    
    long calc=total;
    while(calc!=sec)
    {
        if(calc==0)
        {
            break;
        }
    if(calc>=(24*3600))
    {
        days=(total/(24*3600));
        calc=total%(24*3600);
        printf("\nDAYS: %d", days);
    }
    else if(calc>=3600)
    {
        hr=calc/3600;
        calc=calc%3600;
        printf("\nHOURS: %d", hr);
    }
    else if(calc>=60)
    {
        min=calc/60;
        calc=calc%60;
        printf("\nMINUTES: %d", min);
    }
    else
    {
        sec=calc;
        printf("\nSECONDS: %d", sec);
    }
    }
    return 0;
}