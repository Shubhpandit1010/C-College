#include<stdio.h>

int main()

{
    int c;
    printf("\n-----------------MENU-----------------\n1.ADD\n2.Subtract\n3.Multiply\n4.Divide\nEnter your choice:-> ");
    scanf("%d", &c);

    switch(c)
    {
        case 1:
        int n1,n2;
        printf("\nEnter Two Nos...");
        scanf("%d %d", &n1,&n2);
        printf("\nSUM: %d", n1+n2);
        break;

        case 2:
        printf("\nEnter Two Nos...");
        scanf("%d %d", &n1,&n2);
        printf("\nSUBTRACTION: %d", n1-n2);
        break;

        case 3:
        printf("\nEnter Two Nos...");
        scanf("%d %d", &n1,&n2);
        printf("\nMULTIPLICATION: %d", n1*n2);
        break;

        case 4:
        printf("\nEnter Two Nos..");
        scanf("%d %d", &n1,&n2);
        printf("\nDIVISION: %d", n1/n2);
        break;

        default:
        printf("\nPlease enter valid choice...");
    }
    return 0;
}