#include<stdio.h>

int main()

{
    char str[30];

    printf("\nEnter String: ");
    scanf("%[^abc]", str);

    printf("\n%s", str);
    return 0;
}