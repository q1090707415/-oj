#include <stdio.h>

/*
int main(void)
{
    int n = 0;
    int m = 0;
    int arr1[1000] = {0};
    int arr2[1000] = {0};
    int arr3[2000] = {0};
    int i = 0;
    //���� n�� m
    scanf("%d %d",&n,&m);
    //����������������
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i = 0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }

    //�ϲ���������
    i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }

    }
    if(i == n)
    {
        for(;j<m;j++)
        {
            arr3[k++] = arr2[j];
        }
    }
    else
    {
        for(;i<n;i++)
        {
            arr3[k++] = arr1[i];
        }
    }
    //arr3��ӡ
    for (i= 0;i<k;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}
*/

int main(void)
{
    int n = 0;
    int m = 0;
    int arr1[1000] = {0};
    int arr2[1000] = {0};
    int arr3[2000] = {0};
    int i = 0;
    //���� n�� m
    scanf("%d %d", &n, &m);
    //����������������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    //�ϲ���������
    i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i++]);
        }
        else
        {
            printf("%d ", arr2[j++]);
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}