#include <stdio.h>

//�������
/*
int main(void)
{
    int n = 0;
    int arr[1000] = {0};
    scanf("%d",&n);
    //����n������
    int i = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //����
    //1.����
    for(i = 0;i<n-1;i++)
    {
        int j = 0;
        for(j = 0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    //2.ȥ��
    //ȥ�رȽϵĶ��� n-1
    for(i = 0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            //��i+1�±������Ԫ����ǰ����
            int k = 0;
            for(k = i;k< n-1;k++)
            {
                arr[k] = arr[k+1];
            }
            n--;
            i--;
        }
    }
    //3.��ӡ
    for(i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

int main(void)
{
    int n = 0;
    int arr[1001] = {0}; // 1000
    scanf("%d", &n);
    //����n������
    int i = 0;
    int m = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        arr[m] = m; //��Ԫ�طŵ�������Ӧ���±�λ��
    }
    for (i = 0; i <= 1000; i++)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    }
    return 0;
}