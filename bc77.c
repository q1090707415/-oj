#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[51] = {0};
    int m = 0;
    //输入个数
    scanf("%d", &n);
    int i = 0;
    //输入有序数字
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //输入要插入的数字
    scanf("%d", &m);
    //输入数据的实现
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > m)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = m;
            break;
        }
    }
    //要插入的元素小于所有的元素
    if (i < 0)
    {
        arr[0] = m;
    }
    //输出
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}