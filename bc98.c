#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[50] = {0};
    scanf("%d", &n);
    int del = 0;
    int i = 0;
    //读取n个数字
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        ;
    }
    //读取要删除的数字
    scanf("%d", &del);
    //删除的动作
    int j = 0; //记录存放数据位置的下标
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }
    }
    //此时的j就是删除元素后的数据个数
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}