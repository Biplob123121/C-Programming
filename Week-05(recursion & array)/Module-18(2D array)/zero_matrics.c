#include <stdio.h>
int main()
{
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count == n * m)
    {
        printf("Zero matrics.");
    }
    else
    {
        printf("Not zero matrics");
    }
    return 0;
}