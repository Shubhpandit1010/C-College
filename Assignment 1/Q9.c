#include<stdio.h>

int main()

{
    int hr,min,sec,totalsec;
    printf("\nEnter Time (hr,min,sec) respectively:-> ");
    scanf("%d %d %d", &hr,&min,&sec);
    totalsec=(hr*3600)+(min*60)+sec;
    printf("\nTOTAL SECONDS:-> %d", totalsec);
    return 0;
}