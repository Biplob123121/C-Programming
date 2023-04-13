/*
                                                G. Palindrome Array
    Given a number N
 and an array A
 of N
 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (1≤Ai≤109)
.

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).
*/
#include <stdio.h>
int main()
{
    int n, i, isPalindrome = 0;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i <= n / 2; i++)
    {
        if (ar[i] != ar[n - 1 - i])
        {
            isPalindrome = 1;
            break;
        }
    }
    if (isPalindrome == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}