#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[40] = {0};
    int i = 0;
    scanf("%d", &n);
    while (n)
    {
        arr[i] = n % 6;
        i++;
        n = n / 6;
    }
    for (i--; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}