/*
        K. Divisors
    Given a number N. Print all the divisors of N in ascending order.
    sample Input:       Output:
    6                   1
                        2
                        3
                        6
*/
#include <stdio.h>
int main()
{
    int num, i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}