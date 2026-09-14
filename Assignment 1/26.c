#include<stdio.h>

int main()

{
    int N,sumo=0,sume=0;
    printf("\nEnter N:-> ");
    scanf("%d", &N);
    for(int i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            sumo=sumo+i;
        }
        else
        {
            sume=sume+i;
        }
    }
    printf("\nSUM of EVEN: %d\nSUM of ODD: %d", sume,sumo);
    return 0;
}