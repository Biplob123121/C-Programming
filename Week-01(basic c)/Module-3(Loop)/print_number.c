#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the highest number: ");
    scanf("%d", &n);
    for (i = -3; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d --- Even\n", i);
        }
        else
        {
            printf("%d --- Odd\n", i);
        }
    }

    return 0;
}