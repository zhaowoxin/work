#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p = "hello";
    char *q = "world";
    char * buf[] = {p, q};
    printf("P: %s, Q: %s\n", p, q);
    //printf("%c\n", q[-2]);
    printf("%s\n", buf[0]);
    printf("%s\n", buf[1]);
    printf("%s\n", buf[2]);
    printf("%s\n", buf[3]);
    printf("%s\n", buf[4]);

    return 0;
}
