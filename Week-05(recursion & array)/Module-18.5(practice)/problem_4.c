#include <stdio.h>

void print_even_indeces(int ar[], int n, int i)
{
    if (i >= n)
        return;
    print_even_indeces(ar, n, i + 2);
    printf("%d ", ar[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    print_even_indeces(ar, n, 0);
    return 0;
}