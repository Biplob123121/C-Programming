#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int t = 1; t <= testcase; t++)
    {
        int n, s, pos, flag = 0;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        scanf("%d", &s);
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == s)
            {
                flag = 1;
                pos = i;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Case %d: %d\n", t, pos + 1);

        }
        else
        {
            printf("Case %d: Not Found\n", t);
        }
    }
    return 0;
}