#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // int zero = 0, one = 0;
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        // printf("%d ", a[i]);
        // if (a[i] == 0)
        // {
        //     count[0]++;
        // }
        // if (a[i] == 1)
        // {
        //     count[1]++;
        // }
        // if (a[i] == 2)
        // {
        //     count[2]++;
        // }
        int val = a[i];
        count[val]++;
    }

    // printf("Zero - %d\n", count[0]);
    // printf("One - %d\n", count[1]);
    // printf("Two - %d\n", count[2]);

    for (int i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }
    return 0;
}