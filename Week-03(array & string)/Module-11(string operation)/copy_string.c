#include <stdio.h>
//we cn use strcpy for copy a string
// strcpy(a, b)  here b will be copied in a
#include <string.h>
int main()
{
    char a[101], b[101];
    int lenA, i;
    fgets(a, 101, stdin);
    lenA = strlen(a);
    for (i = 0; i <= lenA; i++)
    {
        b[i] = a[i];
    }
    printf("%s", b);
    return 0;
}