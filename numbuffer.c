#include <stdio.h>

int main(void)
{
    char buf[] = "hello";
    int num[] = {1, 2, 3, 4, 5};
    printf("%c\n", buf[-1]);
    printf("%d\n", num[-1]);

    return 0;
}
