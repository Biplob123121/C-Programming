#include <stdio.h>
int main()
{
    int n, m, is_diagonal = 1;
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
                if ((i + j) != n - 1)
                {
                    if (ar[i][j] != 0)
                    {
                        is_diagonal = 0;
                        break;
                    }
                }
            }
        }
        if (is_diagonal == 1)
        {
            printf("Diagonal Matrics.");
        }
        else
        {
            printf("Not a diagonal Matrics.");
        }
    }
    else
    {
        printf("Not a diagonal Matrics.");
    }
    return 0;
}