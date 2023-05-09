#include <stdio.h>
int main()
{
    // char a[6] = {'c', 'o', 'd', 'i', 'n', 'g'};
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c\n", a[i]);
    // }

    // char a[6] = "Coding";
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c\n", a[i]);
    // }

    // char a[7] = "Coding";
    // printf("%s", a);

    // char a[] = "Coding\0";
    // int sz = sizeof(a) / sizeof(char);
    // printf("%d\n", sz);
    // printf("%s", a);

    char a[] = "Coding";
    int sz = sizeof(a) / sizeof(char);
    printf("%d\n", sz);
    printf("%s", a);

    return 0;
}