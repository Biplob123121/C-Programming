#include <stdio.h>
int main()
{
    int i, j, n, k, l = 1, s = 0;
    scanf("%d", &n);
    s = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= l; k++)
        {
            printf("*");
        }
        s--;
        l = l + 2;
        printf("\n");
    }
    return 0;
}