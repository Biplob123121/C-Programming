#include <stdio.h>

void print_digit(int num)
{
    if (num == 0)
        return;
    int x = num % 10;
    print_digit(num / 10);
    printf("%d ", x);
}

int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int num;
        scanf("%d", &num);
        print_digit(num);
        if (num == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}