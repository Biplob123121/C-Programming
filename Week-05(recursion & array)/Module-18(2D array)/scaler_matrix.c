#include <stdio.h>
int main()
{
    int n, m, is_scaler = 1;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int temp = ar[0][0];
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
                        is_scaler = 0;
                        break;
                    }
                }
                else if (i == j)
                {
                    if (ar[i][j] != temp)
                    {
                        is_scaler = 0;
                        break;
                    }
                }
            }
        }
        if (is_scaler == 1)
        {
            printf("Scaler Matrics.");
        }
        else
        {
            printf("Not a scaler Matrics.");
        }
    }
    else
    {
        printf("Not a scaler Matrics.");
    }
    return 0;
}