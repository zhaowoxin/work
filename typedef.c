#include <stdio.h>

int main(void)
{
    typedef char* pstr;
    char string[4] = "abc";
    const char* p1 = string;
    //char* const p2 = string;
    //const pstr p3 = string;
    p1++;
    //p2++;
    //p3++;
    printf("%s\n", p1);

    return 0;
}
