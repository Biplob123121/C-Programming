#include <stdio.h>
#include <string.h>
int main()
{
    int t, lenS, i;
    scanf("%d", &t);
    char s[101];
    for (i = 1; i <= t; i++)
    {
        scanf("%s", &s);
        lenS = strlen(s);
        if (lenS > 10)
        {
            printf("%c%d%c\n", s[0], lenS - 2, s[lenS - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
    return 0;
}