#include <stdio.h>
int main()
{
    int w, h, testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        scanf("%d %d", &w, &h);
        if (w == h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}