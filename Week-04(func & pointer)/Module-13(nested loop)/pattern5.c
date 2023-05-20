#include <stdio.h>
int main()
{
    int n, m = 1, p=0, l = 1, s = 0;
    scanf("%d", &n);
    s = n - 1;
    p=n+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= l; k++)
        {
            printf("*");
        }
        s--;
        l = l + 2;
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= p; k++)
        {
            printf("*");
        }
        m++;
        p=p-2;
        printf("\n");
    }
    return 0;
}