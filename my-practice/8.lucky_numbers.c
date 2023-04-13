#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (a; a <= b; a++)
    {
        if (a == 4 || a == 7)
        {
            printf("%d ", a);
        }
        else
        {
            printf("-1");
        }
    }
    return 0;
}