#include<stdio.h>

int main()

{
    int N;
    printf("\nEnter N: ");
    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        printf("%d -> ", i*i);
    }
    return 0;
}