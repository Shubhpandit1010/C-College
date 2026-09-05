#include<stdio.h>

int main()

{
    float fah,cel;
    printf("\nEnter Temperature in Fahrenheit:-> ");
    scanf("%f", &fah);
    cel=((fah-32)*5)/9; //What's Wrong
    printf("\nTemperature in Celsius is:-> %f", cel);
    return 0;
}