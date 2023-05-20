#include <stdio.h>
int main()
{
    int n, k, i, count = 0;
    scanf("%d %d", &n, &k);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int advanceValue = a[k - 1];
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0 && a[i] >= advanceValue)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("%d\n", count);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}