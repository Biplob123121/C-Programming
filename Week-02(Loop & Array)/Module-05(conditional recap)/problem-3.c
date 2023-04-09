/*
    Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
    Sample Input:           Output:
    a                       A
    M                       m
    Q                       q
*/

#include <stdio.h>
int main()
{
    char letter, converted_letter;
    int ascii;
    scanf(" %c", &letter);
    ascii = letter;
    if (ascii > 96)
    {
        converted_letter = ascii - 32;
        printf("%c\n", converted_letter);
    }
    else
    {
        converted_letter = ascii + 32;
        printf("%c\n", converted_letter);
    }
    return 0;
}