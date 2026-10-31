#include<stdio.h>

typedef struct Complex
{
    int real;
    int imaginary;
}Complex;

int main()

{
    Complex a,b;
    a.real=5;
    a.imaginary=10;
    b.real=2;
    b.imaginary=15;

    printf("\na = %d + i %d\nb = %d + i %d", a.real,a.imaginary,b.real,b.imaginary);
    return 0;
}