#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (abs(a - b) > 1)
    {
        printf("NO\n");
    }
    else if (a == 0 && b == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES");
    }
    return 0;
}