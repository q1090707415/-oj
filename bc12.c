#include <stdio.h>

1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 int main(void)
{
    // 输入一个字符
    char ch = 0;
    ch = getchar();

    //输出金子塔
    int i = 0;
    //没循环一次打印一行
    //每一行由空格和字符
    for (i = 0; i < 5; i++)
    {
        int j = 0;
        for (j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }
        //字符
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}