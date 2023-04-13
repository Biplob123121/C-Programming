/*
        Q. Digits
    Given a number N. Print the digits of that number from right to left separated by space.
        Input
        First line contains a number T (1 ≤ T ≤ 10) number of test cases.

        Next T lines will contain a number N (0 ≤ N ≤ 109)
    Sample Input:               Output:
    4
    121                         1 2 1
    39                          9 3
    123456                      6 5 4 3 2 1
    1200                        0 0 2 1
*/
#include <stdio.h>
int main()
{
    int n, i, num, digit;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        do
        {
            digit = num % 10;
            num = num / 10;
            printf("%d ", digit);
        } while (num > 0);
        printf("\n");
    }

    return 0;
}