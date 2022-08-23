#include <stdio.h>

int main(void)
{
    char arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}