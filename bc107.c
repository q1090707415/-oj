#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int arr[10][10] = {0};
    scanf("%d%d", &n, &m);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //输出转置后的矩阵
    for (i = 0; i < m; i++) // 3
    {
        for (j = 0; j < n; j++) // 2
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}