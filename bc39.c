#include <stdio.h>
#include <stdlib.h>
// int main(void)
// {
//     //����
//     int n = 0; //����
//     int arr[40] = {0}; //�ɼ�
//     scanf("%d",&n);
//     int i = 0;
//     for (i = 0; i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     //����
//     //ð��ʵ������ ���� ��5��������߳ɼ�
//     for( i = 0;i < n-1;i++)
//     {
//         int flag = 1; //������һ��Ҫ����������Ѿ�����
//         //һ�˵�����
//         int j = 0;
//         for(j = 0;j< n-1-i;j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//                 flag = 0; //������������ݲ���ȫ����
//             }
//         }
//          if (flag == 1)
//         {
//             //˵���Ѿ�����
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
    //����
    int n = 0;         //����
    int arr[40] = {0}; //�ɼ�
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