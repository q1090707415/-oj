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
    //ȥ�ز���
    for (i = 0; i < n; i++)
    {
        //�ж�arr[i]�Ƿ��ں�߳���
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                //ȥ��-���Ԫ����ǰ����
                int k = 0;
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--; //����j++����
            }
        }
    }
    //��ӡԪ��
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}