#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[100000] = {0};
    scanf("%d", &n);
    int i = 0;
    int tmp = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp] = tmp;
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}