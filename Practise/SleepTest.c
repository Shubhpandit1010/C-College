#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()

{

    time_t start, end;

    double diff;

    time(&start);
    sleep(3);
    time(&end);

    diff = difftime(end, start);
    printf("\nDifference Time:-> %lf", diff);

    return 0;
}