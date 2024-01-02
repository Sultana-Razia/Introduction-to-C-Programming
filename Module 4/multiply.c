#include <stdio.h>
int main()
{
    int a;
    long long int b;
    scanf("%d %lld", &a, &b);
    long long int multiply = a * b;
    printf("%lld", multiply);
    return 0;
}