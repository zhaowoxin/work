#include <stdio.h>
#define D(x...) printf(#x)
//#define D(x,...) printf(#x, ##__VA_ARGS__) equal to the last one

int main(int argc, const char *argv[])
{
    D(hello, world);
    
    return 0;
}
