#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[30][30] = {0};
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == 0) //��һ��
                arr[i][j] = 1;
            if (i == j) //�Խ���
                arr[i][j] = 1;
            if (i >= 2 && j >= 1)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    //��ӡ
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}