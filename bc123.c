#include <stdio.h>

int main(void)
{
    int arr[4] = {0};
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    //����arr[0] �������ǵ����ֵ
    int max = arr[0];
    for (i = 1; i < 4; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d\n", max);
    return 0;
}