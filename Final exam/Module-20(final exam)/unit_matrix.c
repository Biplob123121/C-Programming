#include <stdio.h>
int main()
{

    int n, flag = 1;
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (mat[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            else if (i == j)
            {
                if (mat[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}