#include <stdio.h>

int count_length(char ch[], int i)
{
    if (ch[i] == '\0')
        return 0;
    int l = count_length(ch, i + 1);
    return l + 1;
}

int main()
{
    char ch[20];
    scanf("%s", ch);
    int length = count_length(ch, 0);
    printf("%d\n", length);
    return 0;
}