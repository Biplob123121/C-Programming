#include <stdio.h>
int main()
{
    int ar[5] = {12, 15, 20, 25, 30};
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}