/*
    Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".
    Sample Input:           Output:
    10 9                    Yes
    5 5                     Yes
    5 7                     No
*/

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}