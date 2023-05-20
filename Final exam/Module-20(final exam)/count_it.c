#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    int length, capital = 0, small = 0, space = 0;
    fgets(str, 1001, stdin);
    length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", capital, small, space);
    return 0;
}