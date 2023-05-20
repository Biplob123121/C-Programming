#include <stdio.h>
#include <string.h>

int is_palindrome(char ar[])
{
    int length, is_pal = 1;
    length = strlen(ar);
    for (int i = 0; i <= length / 2; i++)
    {
        if (ar[i] != ar[length - i - 1])
        {
            is_pal = 0;
            break;
        }
    }

    return is_pal;
}

int main()
{
    char ar[50];
    scanf("%s", ar);
    int is_pal = is_palindrome(ar);
    if (is_pal == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}