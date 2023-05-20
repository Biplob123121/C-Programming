#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, pt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= pt; k++)
        {
            if (i % 2 != 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        space--;
        pt = pt + 2;
        printf("\n");
    }
    return 0;
}