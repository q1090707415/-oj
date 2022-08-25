#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        //ÐÐ
        for (i = 0; i < n; i++)
        {
            //ÁÐ
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}