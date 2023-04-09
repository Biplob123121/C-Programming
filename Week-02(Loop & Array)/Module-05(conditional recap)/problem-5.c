/*
    Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
    Sample Input:       Output:
    a                   ALPHA  IS SMALL
    A                   ALPHA  IS CAPITAL
    9                   IS DIGIT
*/
#include <stdio.h>
int main()
{
    char n;
    int ascii;
    scanf(" %c", &n);
    ascii = n;
    if (ascii > 96)
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (ascii > 64)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}