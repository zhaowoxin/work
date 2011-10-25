//可重入：只要输入数据相同，就应产生相同的输出。
//Obvirously this program is not.
#include <stdio.h>

int add(int a)
{
    static int b = 1; 
    b = 0;
    b++;

    return b;
}

int main(void)
{
    printf("%d\n", add(1));
    printf("%d\n", add(1));

    return 0;
}
