#include<stdio.h>

int main()

{
    int salary,grosssalary;
    printf("\nEnter One Month Salary:-> ");
    scanf("%d", &salary);
    grosssalary=salary*12;
    printf("\nGROSS PAY:-> %d", grosssalary);
    return 0;
}