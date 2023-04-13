/*
            L. GCD
        Given two numbers A and B. Print the greatest common divisor between (A, B).

    Note: The greatest common divisor (GCD) of two or more integers, which are not all zeroes, is the largest positive integer that divides each of the integers.
*/
#include <stdio.h>
int main()
{
    int num1, num2, i, temp, gcd;
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        printf("%d\n", num1);
    }
    else if (num1 > num2)
    {
        while (num2 > 0)
        {
            temp = num1 % num2;
            if (temp == 0)
            {
                printf("%d\n", num2);
                break;
            }
            else
            {
                num1 = num2;
                num2 = temp;
            }
        }
    }
    else
    {
        while (num1 > 0)
        {
            temp = num2 % num1;
            if (temp == 0)
            {
                printf("%d", num1);
                break;
            }
            else
            {
                num2 = num1;
                num1 = temp;
            }
        }
    }
    return 0;
}