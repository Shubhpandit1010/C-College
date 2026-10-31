#include<stdio.h>

int main()

{
    char choice;
    int n1,n2;
    printf("\n-----------------MENU------------------\n'a': ADD\n's': Subtract\n'm': Multiply\n'd': Divide\n'r': Remainder\nEnter Char:-> ");
    scanf("%c", &choice);

      printf("\nEnter Two nos.: ");
    scanf("%d %d", &n1,&n2);
    switch(choice)
    {
        case 'a':
        printf("\nSUM: %d", n1+n2);
        break;

        case 's':
        printf("\nSubtraction: %d", n1-n2);
        break;

        case 'm':
        printf("\nProduct: %d", n1*n2);
        break;

        case 'd':
        printf("\nQuotient: %f",(float)n1/n2);
        break;

        case 'r':
        printf("\nRemainder: %d", n1%n2);
        break;

        default:
        printf("\nPlease Enter A Valid Choice..");
    }
    return 0;
}