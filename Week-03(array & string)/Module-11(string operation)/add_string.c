#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101], sum[203];
    int lenA, lenB, i, n;
    scanf("%s %s", a, b);
    lenA = strlen(a);
    lenB = strlen(b);
    n = lenA + lenB;
    for (i = 0; i < lenA; i++)
    {
        sum[i] = a[i];
    }
    sum[lenA]=' ';
    for (i = 0; i < lenB; i++)
    {
        sum[lenA + 1 + i] = b[i];
    }
    printf("%s", sum);
    return 0;
}