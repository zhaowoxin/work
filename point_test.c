#include <stdio.h>
#include <string.h>

int main(void)
{
    char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};
    char **cp[] = {c+3, c+2, c+1, c};
    char ***cpp = cp;

    printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp + 3);
    printf("%s\n", **cpp);
    printf("%s\n", *cpp[-1]);
    printf("%s\n", *cpp[-2]);
    printf("%s\n", *cpp[-3]);
    printf("%d\n", strlen(c[0]));
    printf("%s\n", cpp[-1][-1]);
    printf("%s\n", *cp[-1]);

    return 0;
}
