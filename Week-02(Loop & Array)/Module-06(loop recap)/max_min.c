/*
    Given a number N and N numbers, Find the maximum number in these N numbers.
    Sample input:           Output:
    5
    12 2 25 15 17           25
*/
#include <stdio.h>
int main()
{
    int n, num, max = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (max < num)
        {
            max = num;
        }
    }
    printf("%d\n", max);
    return 0;
}