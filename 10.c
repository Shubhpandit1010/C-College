#include<stdio.h>

int main()

{
    int CM,M,P,C,E;
    printf("\nEnter Marks of Mathematics (out of 200):-> ");
    scanf("%d", &M);
    printf("\nEnter Marks of Physics (out of 200):-> ");
    scanf("%d", &P);
    printf("\nEnter Marks of Chemistry (out of 200):-> ");
    scanf("%d", &C);
    printf("\nEnter Marks of Entrance Exam (out of 100):-> ");
    scanf("%d", &E);
    CM=(M/2)+(P/2)+(C/2)+E;
    printf("\nCut Off Marks:-> %d", CM);
    return 0;
}