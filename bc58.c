#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 1; i <= n; i++)
        {
            int j = 0;
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}