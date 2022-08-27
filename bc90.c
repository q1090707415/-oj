#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int num = 0;
    int sum = 0; //表示和
    scanf("%d %d", &n, &m);
    //获取n行m列的矩阵
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &num);
            if (num > 0)
                sum += num;
        }
    }
    printf("%d\n", sum);
    return 0;
}