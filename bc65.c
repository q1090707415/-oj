#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        //�� n
        for (i = 0; i < n; i++)
        {
            //��ӡһ��
            //˫�ո�+*
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
        //�� n+1
        for (i = 0; i < n + 1; i++)
        {
            //��ӡһ��
            int j = 0;
            //˫�ո�+*
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
