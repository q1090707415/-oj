#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        //根据n的值打印菱形
        int i = 0;
        //上 n
        for (i = 0; i < n; i++)
        {
            //每一行打印
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            //空格 + *
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //下 n+1
        for (i = 0; i < n + 1; i++)
        {
            //每一行打印
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            //空格 + *
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}