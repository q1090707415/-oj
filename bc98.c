#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[50] = {0};
    scanf("%d", &n);
    int del = 0;
    int i = 0;
    //��ȡn������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        ;
    }
    //��ȡҪɾ��������
    scanf("%d", &del);
    //ɾ���Ķ���
    int j = 0; //��¼�������λ�õ��±�
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }
    }
    //��ʱ��j����ɾ��Ԫ�غ�����ݸ���
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}