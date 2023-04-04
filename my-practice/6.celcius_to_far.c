#include <stdio.h>
int main()
{
    float cel, far;
    printf("Enter the Celcius Temperature : ");
    scanf("%f", &cel);
    far = (9 * cel) / 5 + 32;
    printf("The farenheight temperature is %0.2f", far);
    return 0;
}