#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        //��ӡ������
        for (i = 1; i <= n; i++)
        {
            //��ӡһ�е�����
            int j = 0;
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}