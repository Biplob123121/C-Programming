/*
                           F. Reversing
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

sample input:
4
5 1 3 2
Output:
2 3 1 5
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
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}