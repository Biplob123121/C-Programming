#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    char ar[n];
    scanf("%s", ar);
    for (i = 0; i < n; i++)
    {
        int value = ar[i] - 48;
        sum = sum + value;
    }
    printf("%d", sum);
    return 0;
}