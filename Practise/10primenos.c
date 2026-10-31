#include<stdio.h>

int main()

{
    int count=0,primecheck;

        for(int i=1;count!=10;i++)
        {
            if(i==1)
            {
                continue;
            }
            primecheck=1;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    primecheck=0;
                }
            }
            if(primecheck==1)
            {
                printf("\t%d", i);
                count+=1;
            }
        }
        return 0;
    
}