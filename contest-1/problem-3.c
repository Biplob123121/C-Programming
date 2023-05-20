#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        ar[i] = ar[i] - max;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", abs(ar[i]));
    }
    return 0;
}