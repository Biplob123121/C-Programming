#include <stdio.h>
int main()
{
    int n, m, r, c;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("Which row do you want to see: ");
    scanf("%d", &r);
    for (int j = 0; j < m; j++)
    {
        printf("%d ", ar[r - 1][j]);
    }

    printf("\nWhich column do you want to see: ");
    scanf("%d", &c);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i][c - 1]);
        printf("\n");
    }

    return 0;
}