#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];
    int lenA, lenB, i, eql = 1;
    scanf("%s %s", a, b);
    lenA = strlen(a);
    lenB = strlen(b);
    if (lenA < lenB)
    {
        printf("%s", a);
    }
    else if (lenB < lenA)
    {
        printf("%s", b);
    }
    else
    {
        for (i = 0; i < lenA; i++)
        {
            if (a[i] != b[i])
            {
                eql = 0;
            }
        }

        if (eql == 0)
        {
            for (i = 0; i < lenA; i++)
            {
                if (a[i] < b[i])
                {
                    printf("%s", a);
                    break;
                }
                else if (b[i] < a[i])
                {
                    printf("%s", b);
                    break;
                }
            }
        }
        else
        {
            printf("%s", a);
        }
    }

    return 0;
}