// copy first three characters
#include <stdio.h>
int main()
{
    char a[100], b[100];
    int i;
    scanf("%s", &a);
    for (i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = '\0';
    printf("%s", b);
    return 0;
}