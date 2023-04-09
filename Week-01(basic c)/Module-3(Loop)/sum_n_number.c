#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter n= ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The summation = %d", sum);

    return 0;
}