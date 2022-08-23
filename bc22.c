#include <stdio.h>

int main(void)
{
    int age = 0;
    //输入
    scanf("%d", &age);
    //计算
    long long second = age * 3.156e7; // 3,156 * 10的七次方
    //输出
    printf("%lld\n", second);
    return 0;
}