#include <stdio.h>
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == ar[i])
        {
            cnt++;
        }
    }
    if (cnt % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
    return 0;
}