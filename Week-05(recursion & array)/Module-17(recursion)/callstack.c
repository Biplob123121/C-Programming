#include <stdio.h>

void world()
{
    printf("world function start..\n");
    printf("world function end..\n");
}

void hello()
{
    printf("Hello function start..\n");
    world();
    printf("Hello function end..\n");
}

int main()
{
    printf("main function start..\n");
    hello();
    printf("main function end..\n");
    return 0;
}