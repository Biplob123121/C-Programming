#include <stdio.h>
int main()
{
    int n, pri_sum = 0, sec_sum = 0, dif = 0;
    scanf("%d", &n);
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri_sum = pri_sum + ar[i][j];
            }

            if ((i + j) == (n - 1))
            {
                sec_sum = sec_sum + ar[i][j];
            }
        }
    }
    dif = pri_sum - sec_sum;
    if (dif < 0)
    {
        printf("%d", dif * -1);
    }
    else
    {
        printf("%d", dif);
    }
    return 0;
}