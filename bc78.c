#include <stdio.h>

int main(void)
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        //         int arr[n+1];//�䳤����
        int arr[101];
        int i = 0;
        //�洢����
        for (i = 2; i <= n; i++)
        {
            arr[i] = i;
        }
        //�о����еĳ���
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
        //�������¼
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

//�Գ���
// int main(void)
// {
//     int n = 0;
//     while (~scanf("%d", &n))
//     {
//         int i = 0;
//         int count = 0;
//         for (i = 2; i <= n; i++)
//         {

//             //�ж�i�Ƿ�Ϊ����
//             // 2-> i-1֮�������
//             int j = 0;
//             // j�Գ�i
//             for (j = 0; j < i; j++)
//             {
//                 //��������
//                 if (i % j == 0)
//                 {
//                     count++;
//                     break;
//                 }
//             }
//             //����
//             if (j == i)
//                 printf("%d ", j);
//         }

//         printf("\n%d\n", count);
//     }
//     return 0;
// }