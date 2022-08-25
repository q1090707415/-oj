#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            //先打印空格
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            //打印*+空格
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}