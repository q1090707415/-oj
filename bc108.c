#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int arr[10][10] = {0};
    int k = 0; //(操作次数)
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //调整多少次
    scanf("%d", &k); // 1\n
    char t = 0;
    int a = 0;
    int b = 0;
    //     getchar();//处理'\n'
    for (i = 0; i < k; i++)
    {
        //每一次操作的过程
        scanf(" %c %d %d", &t, &a, &b); //%c前面空格消除\n
        if (t == 'r')                   //交换行
        {
            for (j = 0; j < m; j++)
            {
                int tmp = arr[a - 1][j];
                arr[a - 1][j] = arr[b - 1][j];
                arr[b - 1][j] = tmp;
            }
        }
        else if (t == 'c') //交换列
        {
            for (j = 0; j < n; j++)
            {
                int tmp = arr[j][a - 1];
                arr[j][a - 1] = arr[j][b - 1];
                arr[j][b - 1] = tmp;
            }
        }
    }
    //打印
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}