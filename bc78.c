#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        //         int arr[n+1];//变长数组
        int arr[101];
        int i = 0;
        //存储数据
        for (i = 2; i <= n; i++)
        {
            arr[i] = i;
        }
        //列举所有的除数
        int j = 0;
        for (j = 2; j <= n; j++)
        {
            int k = 0;
            for (k = j + 1; k <= n; k++)
            {
                if (arr[k] % j == 0)
                {
                    arr[k] = 0;
                }
            }
        }
        //输出并记录
        int count = 0;
        for (i = 2; i <= n; i++)
        {
            if (arr[i] != 0)
                printf("%d ", arr[i]);
            else
                count++;
        }
        printf("\n%d\n", count);
    }
    return 0;
}

//试除法
// int main(void)
// {
//     int n = 0;
//     while (~scanf("%d", &n))
//     {
//         int i = 0;
//         int count = 0;
//         for (i = 2; i <= n; i++)
//         {

//             //判断i是否为素数
//             // 2-> i-1之间的数字
//             int j = 0;
//             // j试除i
//             for (j = 0; j < i; j++)
//             {
//                 //不是素数
//                 if (i % j == 0)
//                 {
//                     count++;
//                     break;
//                 }
//             }
//             //素数
//             if (j == i)
//                 printf("%d ", j);
//         }

//         printf("\n%d\n", count);
//     }
//     return 0;
// }