#include <stdio.h>

int main(void)
{
    //接收10个数
    int i = 0;
    int num = 0;
    int positive = 0; //正数个数
    int negative = 0; //负数个数
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num >= 0)
            positive++;
        else
            negative++;
    }
    printf("positive:%d\n", positive);
    printf("negative:%d\n", negative);

    return 0;
}