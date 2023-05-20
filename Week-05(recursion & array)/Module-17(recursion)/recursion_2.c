#include <stdio.h>

void print(int i)
{
    if (i == 0)
        return;
    printf("%d ", i);
    print(i - 1);
}

int main()
{
    print(5);
    return 0;
}