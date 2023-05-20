#include <stdio.h>
int main()
{
    int n, m = 1, p;
    scanf("%d", &n);
    p=n-1;
    for (int i = 1; i < 2 * n; i++)
    {
        for(int k=1; k<=p; k++){
            printf(" ");
        }
        for (int j = 1; j <= m; j++)
        {
            printf("%d", j);
        }
        if (i < n)
        {
            p--;
            m = m + 2;
        }
        else
        {
            p++;
            m = m - 2;
        }
        printf("\n");
    }
    return 0;
}