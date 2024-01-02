#include <stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    int summation = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a * 1.0 / b;
    printf("%d %d %d %.2f", summation, subtraction, multiplication, division);
    // int a = 5, b = 2;
    // printf("%.2f", a * 1.0 / b);
    return 0;
}