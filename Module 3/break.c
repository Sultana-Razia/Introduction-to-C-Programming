#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 10; i = i + 1)
    {
        // if (i == 5)
        // {
        //     break;
        // }
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
    }
    return 0;
}