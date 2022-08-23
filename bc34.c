#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int sum = 0;
    // %x 是16进制的数据格式
    // %o 是8进制的数据格式

    scanf("%x %o", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
    return 0;
}