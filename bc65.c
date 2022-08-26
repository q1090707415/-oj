#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        //上 n
        for (i = 0; i < n; i++)
        {
            //打印一行
            //双空格+*
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        //下 n+1
        for (i = 0; i < n + 1; i++)
        {
            //打印一行
            int j = 0;
            //双空格+*
            for (j = 0; j < i; j++)
            {
                printf("  ");
            }
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
