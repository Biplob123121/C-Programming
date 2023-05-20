#include <stdio.h>
int main()
{
    int n, x = 1;
    scanf("%d", &n);
    int y = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == x && i != n / 2 + 1)
            {
                printf("\\");
            }
            if (j == y && i != n / 2 + 1)
            {
                printf("/");
            }
            if (i == n / 2 + 1 && j == n / 2 + 1)
            {
                printf("X");
            }
            if (j != x && j != y)
            {
                printf("*");
            }
        }
        printf("\n");
        x++;
        y--;
    }
    return 0;
}