#include <stdio.h>

// this function has return + parameter
int addition(int x, int y)
{
    int sum = x + y;
    return sum;
}

// this function has return + no parameter
float celciusToFarenheight(void)
{
    float cel, frn;
    scanf("%f", &cel);
    frn = (9 * cel / 5) + 32;
    return frn;
}

// this function has no return + parameter
void isLeapYear(int year)
{
    if (year % 400 == 0)
    {
        printf("%d is Leap Year.", year);
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("%d is Leap Year.", year);
    }
    else
    {
        printf("%d is not Leap Year.", year);
    }
}

// this function has no return + no parameter
void pattern(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a, b, sum = 0, year;
    float frn;
    // scanf("%d %d", &a, &b);
    // sum = addition(a, b);
    // printf("%d\n", sum);

    // frn = celciusToFarenheight();
    // printf("%0.2f", frn);

    // scanf("%d", &year);
    // isLeapYear(year);

    pattern();
    return 0;
}