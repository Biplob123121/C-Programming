#include <stdio.h>
int main()
{
    int num = 10;           // int can accept data 10^9
    long long int b = 1000; // long long int can accept -10^18 to 10^18
    float c = 2.67;         // float can accept 6 digit
    double d = 2.789;
    char f = 'B';
    printf("%d\n", num);
    printf("%lld\n", b);
    printf("%0.2f\n", c);
    printf("%lf\n", d);
    printf("%c", f);
    return 0;
}