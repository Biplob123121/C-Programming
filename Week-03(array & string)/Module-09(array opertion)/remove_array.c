#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (i = pos; i < n; i++)
    {
        ar[i] = ar[i + 1];
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}