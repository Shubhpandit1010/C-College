#include<stdio.h>

int main()

{
    int m1,m2,m3,m4,m5,per;
    printf("\nEnter Marks of five Subjects:-> ");
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    if(per>=90 && per<=100)
    {
        printf("\nA");
    }
    else if(per>=80 && per<=89)
    {
        printf("\nB");
    }
    else if(per>=70 && per<=79)
    {
        printf("\nC");
    }
    else
    {
        printf("\nF");
    }
    return 0;
}