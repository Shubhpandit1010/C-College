#include<stdio.h>

int main()

{
    int m1,m2,m3,m4,m5,total,per;
    printf("\nEnter Marks of 5 subjects respectively:-> ");
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    per=(total/5);
    printf("\nTOTAL:-> %d\nPERCENTAGE:-> %d", total,per);
    return 0;
}