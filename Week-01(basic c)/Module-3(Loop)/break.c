#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("%d", i);
         if (i==5)
    {
        break;
    }
    } 
    return 0;
}