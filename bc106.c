#include <stdio.h>

/*
int main(void)
{
    int n = 0;
    int arr[10][10] = {0};
    scanf("%d",&n);
    int i = 0;
    int j = 0;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //�ж��Ƿ�Ϊ�����Ǿ���
      for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
           if(i>j)
           {
                if(arr[i][j] !=0)
            {
                printf("NO\n");
                return 0;
            }
           }
        }
    }
    printf("YES\n");
    return 0;
}
*/

int main(void)
{
    int n = 0;
    int arr[10][10] = {0};
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i > j)
            {
                if (arr[i][j] != 0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    //�ж��Ƿ�Ϊ�����Ǿ���

    printf("YES\n");
    return 0;
}