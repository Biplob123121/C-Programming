#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    int lenA, lenB, n = 0, i, comp = 1;
    scanf("%s %s", a, b);
    lenA = strlen(a);
    lenB = strlen(b);
    if (lenA > lenB)
    {
        n = lenA;
    }
    else
    {
        n = lenB;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        else
        {
            comp = 0;
            break;
        }
    }
    if (comp == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}