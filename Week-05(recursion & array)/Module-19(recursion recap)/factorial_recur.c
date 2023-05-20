#include <stdio.h>

long long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int fact = n * factorial(n - 1);
    return fact;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int fact = factorial(n);
    printf("%lld", fact);
    return 0;
}