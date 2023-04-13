/*
    Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise print "Correct" and terminate the program. Correct password is the number 1999.
    Sample Input:           Output:
    2200                    Wrong
    1020                    Wrong
    1999                    Correct
    1000
    9999
*/
#include <stdio.h>
int main()
{
    int i, pass;
    for (i = 1;; i++)
    {
        scanf("%d", &pass);
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}