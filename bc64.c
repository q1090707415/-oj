#include <stdio.h>

int main(void)
{
    int n = 0;
    //��:ÿ�г��˴�ӡ�Ǻ�+�ո��� ��Ҫ��ӡ�ո�
    while (~scanf("%d", &n))
    {
        int i = 0;
        //�� n
        for (i = 0; i < n; i++)
        {
            //��ӡһ��
            int j = 0;
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            //�ո�
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
        //�� n+!
        for (i = 0; i < n + 1; i++)
        {
            //*+�ո�
            int j = 0;
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }

            //�ո�
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}