/*
        I. Lucky Numbers
A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

    Sample Input:           Output:
    39                      YES
    64                      NO
*/
#include <stdio.h>
int main()
{
    int num, firstDigit, secondDigit;
    scanf("%d", &num);
    firstDigit = num / 10;
    secondDigit = num % 10;

    if (secondDigit == 0)
    {
        printf("YES");
    }
    else if (firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}