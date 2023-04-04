#include <stdio.h>
int main()
{
    int num1, num2, sum, mul, sub, rem;
    float div;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    rem = num1 % num2;

    printf("The addition is %d\n", sum);
    printf("The subtraction is %d\n", sub);
    printf("The multiplication is %d\n", mul);
    printf("The divition is %0.2f\n", div);
    printf("The remainder is %d", rem);

    return 0;
}