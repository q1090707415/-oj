#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        //����n��ֵ��ӡ����
        int i = 0;
        //�� n
        for (i = 0; i < n; i++)
        {
            //ÿһ�д�ӡ
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            //�ո� + *
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //�� n+1
        for (i = 0; i < n + 1; i++)
        {
            //ÿһ�д�ӡ
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            //�ո� + *
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}