#include <stdio.h>

int main(void)
{
    int n = 0;
    //坑:每行出了打印星号+空格外 还要打印空格
    while (~scanf("%d", &n))
    {
        int i = 0;
        //上 n
        for (i = 0; i < n; i++)
        {
            //打印一行
            int j = 0;
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            //空格
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
        //下 n+!
        for (i = 0; i < n + 1; i++)
        {
            //*+空格
            int j = 0;
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }

            //空格
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}