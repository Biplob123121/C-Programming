#include <stdio.h>

void calculate(int x, int y);
void fibonacci(int x);
void factorial(int x);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // calculate(a, b);
    //factorial(a);
    return 0;
}

void factorial(int x)
{
    int fact = 1;
    for (int i = x; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
}

void fibonacci(int x)
{
}

void calculate(int x, int y)
{
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %0.2f\n", x, y, x * 1.0 / y * 1.0);
}