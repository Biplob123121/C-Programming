/*
        B. Searching
    Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

    Note: X may be found once or more than once and may not be found.

    Input
    First line contains a number N (1 ≤ N ≤ 105) number of elements.

    Second line contains N numbers (0 ≤ Ai ≤ 109).

    Third line contains a number X (0 ≤ X ≤ 109).

    Output
    Print the position of X in the first time you find it. If it doesn't exist print -1.
    sample input:
    4
    2 3 2 1
    2
    Output:
    0
    input:
    5
    1 2 0 3 5
    10
    Output:
    -1
*/
#include <stdio.h>
int main()
{
    int n, i, x, index;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        index = -1;
        if (x == ar[i])
        {
            index = i;
            break;
        }
    }
    if (index >= 0)
    {
        printf("%d", index);
    }
    else
    {
        printf("-1");
    }
    return 0;
}