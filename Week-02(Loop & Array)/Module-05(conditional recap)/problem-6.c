/*
    Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
    Sample Input:       Output:
    1 2 3               1 3
    9 12 3              3 12
    76 23 65            23 76
*/
#include <stdio.h>
int main()
{
    int num1, num2, num3, min, max;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else
    {
        min = num3;
    }
    // for max
    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    printf("%d %d", min, max);
    return 0;
}