#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[51] = {0};
    int m = 0;
    //�������
    scanf("%d", &n);
    int i = 0;
    //������������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //����Ҫ���������
    scanf("%d", &m);
    //�������ݵ�ʵ��
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
    //Ҫ�����Ԫ��С�����е�Ԫ��
    if (i < 0)
    {
        arr[0] = m;
    }
    //���
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}