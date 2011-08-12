#include <iostream>
#include <stdio.h>

template <class Type>
    Type add(Type a, Type b)
{
    return a + b;
}

int main(void)
{
    printf("%d, %f\n", add(3, 5), add(2.1, 4.5));

    return 0;
}
