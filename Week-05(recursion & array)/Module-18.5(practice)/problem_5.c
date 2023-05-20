#include <stdio.h>

long long int summation(long long int ar[], int n, int i)
{
    if (i == n)
        return 0;
    return ar[i]+summation(ar, n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int sum = summation(ar, n, 0);
    printf("%lld", sum);
    return 0;
}