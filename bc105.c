#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int arr1[10][10] = {0};
    int arr2[10][10] = {0};
    //输入n和m
    scanf("%d %d", &n, &m);
    //输入第一矩阵的数据
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr1[i][j]);
        }
    }
    //第二个矩阵的数据
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr2[i][j]);
        }
    }
    //比较两个组的对应位置的元素
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}