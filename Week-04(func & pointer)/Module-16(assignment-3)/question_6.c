#include <stdio.h>

// Pass by value is that when we pass value as a parameter into a function, bt that function can't access the address of the variable. here an example given bellow:
int double_value(int x)
{
    return x * 2;
}

// Pass by reference is that when we pass the address of a variable as a parameter into a function. We can use the pointer for pass by reference. here an example given bellow:
int change_value(int *x)
{
    *x = 100;
}

int main()
{
    int a;
    scanf("%d", &a);

    // printf("%d", double_value(a));
    printf("%d\n", a);
    change_value(&a);
    printf("%d\n", a);
    return 0;
}