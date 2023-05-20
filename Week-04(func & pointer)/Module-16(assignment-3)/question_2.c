#include <stdio.h>
int main()
{
    int n, m, p = 1;
    scanf("%d", &n);
    m = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= p; k++)
        {
            printf("%d", i);
        }
        m--;
        p++;
        printf("\n");
    }
    return 0;
}