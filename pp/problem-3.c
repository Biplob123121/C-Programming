#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ar[n], l = 0, m = k;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sub = ceil(n * 1.0 / k * 1.0);
    for (int i = 0; i < sub; i++)
    {
        int min = ar[l];
        for (int j = l; j < m; j++)
        {
            if (min > ar[j])
            {
                min = ar[j];
            }
        }
        l = l + k;
        m = m + k;
        printf("%d ", min);
    }
    return 0;
}