#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int arr[10][10] = {0};
    scanf("%d %d", &n, &m);
    //���վ�������
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //�鿴������
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%d\n", arr[x - 1][y - 1]); //ʵ�ʵ�����
    return 0;
}