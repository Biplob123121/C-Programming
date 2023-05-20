#include <stdio.h>
int main()
{
    int n, m, x, exist = 0;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == x)
            {
                exist = 1;
                break;
            }
        }
    }
    if (exist == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}