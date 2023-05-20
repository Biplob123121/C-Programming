#include <stdio.h>
int main()
{
    int n, m, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int ar[n + m];
    for (i = 0; i < n; i++)
    {
        ar[i] = a[i];
    }
    i = n;
    for (int j = 0; j < m; j++)
    {
        ar[i] = b[j];
        i++;
    }
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}