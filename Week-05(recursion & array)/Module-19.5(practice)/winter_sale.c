#include <stdio.h>
int main()
{
    float x, price, before_price;
    scanf("%f %f", &x, &price);
    before_price = (100 * price) / (100 - x);
    printf("%0.2f", before_price);
    return 0;
}