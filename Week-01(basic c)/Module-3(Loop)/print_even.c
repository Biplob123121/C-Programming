#include <stdio.h>
int main()
{
    int i = 2, n;
    printf("Enter the highest number: ");
    scanf("%d", &n);
    for (i; i <= n; i = i + 2)
    {
        printf("%d\t", i);
    }

    return 0;
}