#include<stdio.h>
#include<time.h>

int main()

{
    time_t now;
    time(&now);

    printf("\nReadable Time:-> %s", ctime(&now));
    return 0;
}
