#include<stdio.h>

int main()

{
    float fah,cel;
    printf("\nEnter Temperature in Fahrenheit:-> ");
    scanf("%f", &fah);
    cel=(fah-32)*((float)5/9);
    printf("\nTemperature in Celsius is:-> %f", cel);
    return 0;
}