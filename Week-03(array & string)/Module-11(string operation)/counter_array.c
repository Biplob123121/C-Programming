#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n], cnt[6] = {0};
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        int value = a[i];
        cnt[value]++;
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d = %d\n", i, cnt[i]);
    }

    return 0;
}