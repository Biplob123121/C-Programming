#include <stdio.h>

void print(int i)
{
    if (i == 6)
        return;
    printf("%d ", i);
    print(i + 1);
}

int main()
{
    print(1);
    return 0;
}