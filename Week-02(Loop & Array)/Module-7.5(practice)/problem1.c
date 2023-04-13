/*
        A. Summation
    Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
*/
#include <stdio.h>
int main()
{
    int n, i;
    long long int sum = 0;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    if (sum >= 0)
    {
        printf("%lld\n", sum);
    }
    else
    {
        sum = sum * -1;
        printf("%lld\n", sum);
    }
    return 0;
}