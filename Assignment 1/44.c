#include<stdio.h>

int main()

{
    float consumption,rate;
    printf("\nEnter CONSUMPTION:-> ");
    scanf("%f", &consumption);

    if(consumption>=0 && consumption<=200)
    {
        rate=0.5*consumption;
    }
    else if(consumption>200 && consumption<=400)
    {
        rate=100+(consumption-200)*0.65;
    }
    else if(consumption>400 && consumption<=600)
    {
        rate=230+(consumption-400)*0.8;
    }
    else
    {
        rate=425+(consumption-600)*125;
    }

    printf("\nRate:-> %f", rate);
    return 0;
}