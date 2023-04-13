/*
    Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
    sample Input:           Output:
    5                       2
                            4
*/
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("-1\n");
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}