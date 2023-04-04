#include <stdio.h>
int main()
{
    int num1, num2, sum, sub, mul;
    float div;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 * 1.0 / num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d + %d = %d\n", num1, num2, sub);
    printf("%d + %d = %d\n", num1, num2, mul);
    printf("%d + %d = %0.2f\n", num1, num2, div);
    return 0;
}