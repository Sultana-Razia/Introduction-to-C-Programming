#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first1 = n / 10;
    int second1 = n % 10;
    if (second1 == 0 || first1 % second1 == 0 || second1 % first1 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}