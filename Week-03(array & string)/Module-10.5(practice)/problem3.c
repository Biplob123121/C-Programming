#include <stdio.h>
#include <string.h>
int main()
{
    int lenS, i;
    char s[100001];
    scanf("%s", &s);
    lenS = strlen(s);
    for (i = 0; i < lenS; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        else if(s[i]==',')
        {
            s[i]= ' ';
        }
    }
    printf("%s", s);
    return 0;
}