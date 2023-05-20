#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[50];
    int lenA, lenB, i;
    scanf("%s %s", a, b);
    lenA = strlen(a);
    lenB = strlen(b);
    a[lenA] = ' ';
    for (i = 0; i <= lenB; i++)
    {
        a[lenA + 1 + i] = b[i];
    }
    printf("%s", a);
    return 0;
}