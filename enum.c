#include <stdio.h>

enum color
{
    red,
    green = 3,
    blue
} color_e ;

int main(void)
{
    color_e = red;

    printf("%d\n", sizeof(color_e));
    printf("%d\n", color_e );
    return 0;
}
