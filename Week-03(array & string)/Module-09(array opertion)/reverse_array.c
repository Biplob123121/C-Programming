#include <stdio.h>
int main()
{
    int n, i, temp;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = ar[i];
        ar[i] = ar[n - i - 1];
        ar[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}