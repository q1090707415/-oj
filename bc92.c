#include <stdio.h>

int main(void)
{
    int arr[10] = {0};
    int i = 0;
    // ‰»Î
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ‰≥ˆ - µπ–Ú
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}