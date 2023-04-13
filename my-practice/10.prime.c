/*
        H. One Prime
    Given a number X. Determine if the number is prime or not
*/
#include <stdio.h>
int main()
{
    int num, i, count = 0;
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count < 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}