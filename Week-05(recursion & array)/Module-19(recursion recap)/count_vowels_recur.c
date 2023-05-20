#include <stdio.h>

int count_vowels(char ch[], int i)
{
    if (ch[i] == '\0')
    {
        return 0;
    }
    int cnt = count_vowels(ch, i + 1);
    if (ch[i] >= 'A' && ch[i] <= 'Z')
    {
        ch[i] = ch[i] + 32;
    }
    if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    char ch[201];
    fgets(ch, 201, stdin);
    int count = count_vowels(ch, 0);
    printf("%d", count);
    return 0;
}