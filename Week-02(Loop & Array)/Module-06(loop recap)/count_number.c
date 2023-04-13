/*
    Given N numbers. Count how many of these values are even, odd, positive and negative.
    First line contains one number N (1 ≤ N ≤ 103) number of values.
    Second line contains N numbers (-105 ≤ Xi ≤ 105).
    Sample Input:           Output:
    5                       Even: 3
    -5 0 -3 -4 12           Odd: 2
                            Positive: 1
                            Negative: 3
*/
#include <stdio.h>
int main()
{
    int n, num, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}