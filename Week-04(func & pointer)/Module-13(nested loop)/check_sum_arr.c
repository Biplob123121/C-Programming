#include <stdio.h>
int main()
{
    int n, i, j, x, flag = 0;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ar[i] + ar[j] == x)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}