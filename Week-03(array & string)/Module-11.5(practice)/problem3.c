#include <stdio.h>
#include <string.h>
int main()
{
    char s;
    int cnt[26] = {0}, i;
    while (scanf("%c", &s) != EOF)
    {
         cnt[s - 'a']++;
        
    }
    for (i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            printf("%c : %d\n", i + 97, cnt[i]);
        }
    }
    return 0;
}