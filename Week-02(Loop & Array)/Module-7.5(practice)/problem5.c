/*
                              E. Lowest Number
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

Sample input:
5
5 6 2 3 2
Output:
2 3
*/
#include <stdio.h>
int main()
{
    int n, i, index, temp;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        temp = ar[i];
        for (int j = 0; j < n; j++)
        {
            if (temp > ar[j])
            {
                temp = ar[j];
                index = j;
            }
        }
    }
    printf("%d %d", temp, index + 1);
    return 0;
}