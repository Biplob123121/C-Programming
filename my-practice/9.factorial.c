/*
        G. Factorial
    Given a number N. Print the factorial of number N.

    Input
    First line contains a number T (1 ≤ T ≤ 15) number of test cases.

    Next T lines will contain a number N (0 ≤ N ≤ 20)

    Output
    For each test case print a single line contains the factorial of N.

    sample Input:
    2
    5
    3
    Output:
    120
    6
*/
#include <stdio.h>
int main()
{
    int test_case, n, i;
    scanf("%d", &test_case);
    for (i = 1; i <= test_case; i++)
    {
        long long int fact = 1;
        scanf("%d", &n);
        while (n >= 1)
        {
            fact = fact * n;
            n--;
        }
        printf("%lld\n", fact);
    }
    return 0;
}