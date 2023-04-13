/*
    Given a lowercase alphabet character. You have to print the next character in the alphabet.
    Sample Input:       Output:
    a                   b
*/
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int ascii = ch;
    if (ascii == 122)
    {
        printf("%c", 97);
    }
    else
    {
        printf("%c", ascii + 1);
    }
    return 0;
}