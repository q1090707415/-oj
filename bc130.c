#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[100] = {0};
    int x = 0;
    scanf("%d", &n);
    int i = 0;
    int count = 0;
    // n个数字的读取
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //读取x
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    printf("%d\n", count);
    return 0;
}