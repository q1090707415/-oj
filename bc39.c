#include <stdio.h>
#include <stdlib.h>
// int main(void)
// {
//     //输入
//     int n = 0; //个数
//     int arr[40] = {0}; //成绩
//     scanf("%d",&n);
//     int i = 0;
//     for (i = 0; i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     //排序
//     //冒泡实现排序 升序 后5个就是最高成绩
//     for( i = 0;i < n-1;i++)
//     {
//         int flag = 1; //假设这一趟要排序的数据已经有序
//         //一趟的内容
//         int j = 0;
//         for(j = 0;j< n-1-i;j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//                 flag = 0; //本趟排序的数据不完全有序
//             }
//         }
//          if (flag == 1)
//         {
//             //说明已经有序
//             break;
//         }
//     }
//     for(i = n-1;i>= n-5;i--)
//     {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }
int cmp_int(const void *e1, const void *e2)
{
    return *(int *)e1 - *(int *)e2;
}

int main(void)
{
    //输入
    int n = 0;         //个数
    int arr[40] = {0}; //成绩
    scanf("%d", &n);
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // qsort
    qsort(arr, n, sizeof(n), cmp_int);

    for (i = n - 1; i >= n - 5; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}