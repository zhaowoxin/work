#include <stdio.h>

struct tmp {
    int a;
    int b;
};

struct tmp str(struct tmp world)
{
    struct tmp nice;

    nice.a = world.a;
    nice.b = world.b;

    return nice;
}

int main(void)
{
    struct tmp hello;

    hello.a = 1; hello.b = 2;
    struct tmp to = str(hello);
    printf("%d, %d\n", to.a, to.b);

    return 0;
}
