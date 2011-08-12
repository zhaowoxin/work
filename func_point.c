#include <stdio.h>

void func()
{
    printf("hello world\n");
}

int main(int argc, const char *argv[])
{
    //void (*p)();
    typedef void (*p)();
    p f = func; 
    f();

    return 0;
}
