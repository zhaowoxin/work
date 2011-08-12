#include <stdio.h>
#pragma pack(2)

struct const_area {
    char *w; 
    char a ;
} /* optional variable list */;

int main()
{
    struct const_area b;
    printf("%d\n", sizeof(b));

    return 0;
}
