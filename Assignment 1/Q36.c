#include<stdio.h>

int main()

{
    int terms;
    printf("\nEnter Terms:-> ");
    scanf("%d", &terms);

    for(int i=1;i<=(2*terms)-1;i=i+2)
    {
        printf("%d ", i);
    }
    return 0;
}