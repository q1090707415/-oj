#include <stdio.h>

int main(void)
{
    //输入
    int second = 0;
    int h = 0; //小时
    int m = 0; //分钟
    int s = 0; //秒
    scanf("%d", &second);
    //计算
    h = second / 60 / 60;
    m = second / 60 % 60;
    s = second % 60;
    //输出
    printf("%d %d %d", h, m, s);
    return 0;
}