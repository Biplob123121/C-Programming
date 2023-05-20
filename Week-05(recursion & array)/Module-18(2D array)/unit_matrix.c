#include <stdio.h>
int main()
{
    int n, m, is_unit = 1;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i != j)
                {
                    if (ar[i][j] != 0)
                    {
                        is_unit = 0;
                        break;
                    }
                }
                else if (i == j)
                {
                    if (ar[i][j] != 1)
                    {
                        is_unit = 0;
                        break;
                    }
                }
            }
        }
        if (is_unit == 1)
        {
            printf("Unit Matrics.");
        }
        else
        {
            printf("Not a unit Matrics.");
        }
    }
    else
    {
        printf("Not a unit Matrics.");
    }
    return 0;
}