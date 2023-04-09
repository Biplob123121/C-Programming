/*
    Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

    For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.f
    Sample Input:           Output:
    4569                    EVEN
    3569                    ODD
    3564                    ODD
*/
#include <stdio.h>
int main()
{
    int num, firstDigit;
    scanf("%d", &num);
    while (num >= 10)
    {
        num = num / 10;
    }

    firstDigit = num;
    if (firstDigit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}