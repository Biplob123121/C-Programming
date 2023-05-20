#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int l, r, sum = 0;
        scanf("%lld %lld", &l, &r);
        if (l > r)
        {
            long long int temp = r;
            r = l;
            l = temp;
        }
        sum = (r * (r + 1) / 2) - (l * (l - 1) / 2);
        printf("%lld\n", sum);
    }
    return 0;
}