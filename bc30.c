#include <stdio.h>

int main(void)
{
    int n = 0;
    int h = 0;
    int m = 0;
    //输入
    while (scanf("%d %d %d", &n, &h, &m) != EOF)
    {
        if (m % h)
        {
            printf("%d\n", n - m / h - 1);
        }
        //没有打开新的
        else
        {
            printf("%d\n", n - m / h);
        }
    }
    //计算

    return 0;
}