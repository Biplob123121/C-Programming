#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int lenA, lenB, i, eql = 1;
    scanf("%s %s", a, b);
    lenA = strlen(a);
    lenB = strlen(b);
    if (lenA > lenB)
    {
        printf("The big string is %s", a);
    }
    else if (lenA < lenB)
    {
        printf("The big string is %s", b);
    }
    else
    {
        for (i = 0; i < lenA; i++)
        {
            if (a[i] != b[i])
            {
                eql = 0;
            }
        }
        if (eql == 1)
        {
            printf("The both strings are same");
        }
        else
        {
            for (i = 0; i < lenA; i++)
            {
                if (a[i] > b[i])
                {
                    printf("The big string is %s", a);
                    break;
                }
                else if(a[i]<b[i])
                {
                    printf("The big string is %s", b);
                    break;
                }
            }
        }
    }
    return 0;
}