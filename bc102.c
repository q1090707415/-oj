#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int arr[10][10] = {0};
    scanf("%d %d", &n, &m);
    //接收矩阵数据
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //查看的坐标
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%d\n", arr[x - 1][y - 1]); //实际的坐标
    return 0;
}