#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int arr[1000] = {0};
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //去重操作
    for (i = 0; i < n; i++)
    {
        //判断arr[i]是否在后边出现
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                //去重-后边元素往前覆盖
                int k = 0;
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--; //避免j++跳过
            }
        }
    }
    //打印元素
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}