#include <stdio.h>
int main()
{
    int num, i, reverse = 0, remainder;
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("%d", reverse);
    return 0;
}