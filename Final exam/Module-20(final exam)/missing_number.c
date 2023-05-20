#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        long long int sum, num1, num2, num3, num4;
        scanf("%lld %lld %lld %lld", &sum, &num1, &num2, &num3);
        num4 = sum - (num1 + num2 + num3);
        printf("%lld\n", num4);
    }
    return 0;
}