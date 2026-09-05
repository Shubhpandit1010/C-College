#include<stdio.h>

int main()

{
    int hr,min,sec,total;
    printf("\nEnter Time (hr,min,sec) respectively:-> ");
    scanf("%d %d %d", &hr,&min,&sec);
    total=(hr*3600)+(min*60)+sec;
    printf("\nTOTAL SECONDS:-> %d", total);
    return 0;
}