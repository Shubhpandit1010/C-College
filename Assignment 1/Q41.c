#include<stdio.h>

int main()

{
    int n;
    printf("\nEnter No.: ");
    scanf("%d", &n);

    int i=1;
    while(i!=(n+1))
    {
        if(n%i==0)
        {
            printf("%d -> ", i);
        }
        i++;
    }
    
    return 0;
}