#include <stdio.h>
int main()
{
    int i;

    // for (i = 1; i <= 5; i++)
    // for (i = 2; i <= 20; i = i + 2)
    for (i = 10; i >= 1; i = i - 1)
    {
        printf("%d\n", i);
    }
    return 0;
}