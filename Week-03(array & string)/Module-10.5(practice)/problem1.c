#include <stdio.h>
int main()
{
    int n, i, min, minIndex, max, maxIndex;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    min = ar[0];
    minIndex = 0;
    for (i = 0; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
            minIndex = i;
        }
    }
    max = ar[0];
    maxIndex = 0;
    for (i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
            maxIndex = i;
        }
    }

    ar[minIndex] = max;
    ar[maxIndex] = min;

    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}