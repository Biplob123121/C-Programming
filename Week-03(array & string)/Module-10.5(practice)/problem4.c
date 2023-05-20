#include <stdio.h>
#include <string.h>
int main()
{
    int lenS, i, isPalindrome = 1;
    char s[1001];
    scanf("%s", &s);
    lenS = strlen(s);
    for (i = 0; i < lenS / 2; i++)
    {
        if (s[i] != s[lenS - i - 1])
        {
            isPalindrome = 0;
        }
    }
    if (isPalindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}