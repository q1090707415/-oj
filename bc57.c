#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            //��ӡһ��
            int j = 0;
            for (j = 0; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}