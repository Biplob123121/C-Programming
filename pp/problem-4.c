#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 1; i <= testcase; i++)
    {
        int l, r;
        long long int sum = 0;
        scanf("%d %d", &l, &r);
        if (l > r)
        {
            sum = (l * (l + 1) / 2) - (r * (r - 1) / 2);
        }
        else
        {
            sum = (r * (r + 1) / 2) - (l * (l - 1) / 2);
        }
        printf("%lld\n", sum);
    }
    return 0;
}