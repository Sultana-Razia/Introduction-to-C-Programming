#include <stdio.h>
int main()
{
    int i = 10;
    // i++;
    // ++i;
    // int x = ++i;
    // int x = i++;
    // printf("%d", i);

    // int x = i++;
    // int x = ++i;
    // printf("x-%d i-%d", x, i);

    // int x = --i;
    int x = i--;
    printf("x-%d i-%d", x, i);
    return 0;
}