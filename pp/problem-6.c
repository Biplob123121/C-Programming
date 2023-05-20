#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((ar[i] + 1) == ar[j])
            {
                printf("%d ", ar[j]);
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}