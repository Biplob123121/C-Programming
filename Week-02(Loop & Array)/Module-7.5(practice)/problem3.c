/*
                             C. Replacement

Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.
Sample input:
5
1 -2 0 3 4
Output:
1 2 0 1 1
*/
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] > 0)
        {
            ar[i] = 1;
        }
        else if (ar[i] < 0)
        {
            ar[i] = 2;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}